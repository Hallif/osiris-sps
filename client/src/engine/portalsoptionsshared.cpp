// <osiris_sps_source_header>
// This file is part of Osiris Serverless Portal System.
// Copyright (C)2005-2012 Osiris Team (info@osiris-sps.org) / http://www.osiris-sps.org )
//
// Osiris Serverless Portal System is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Osiris Serverless Portal System is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Osiris Serverless Portal System.  If not, see <http://www.gnu.org/licenses/>.
// </osiris_sps_source_header>

#include "stdafx.h"
#include "portalsoptionsshared.h"

#include "conversions.h"
#include "cryptmanager.h"
#include "datetime.h"
#include "dbdatabasessystem.h"
#include "entitiessnapshotmanager.h"
#include "httpparser.h"
#include "idbdriver.h"
#include "idboptions.h"
#include "iportaldatabase.h"
#include "isisendpoint.h"
#include "lock.h"
#include "log.h"
#include "option.h"
#include "options.h"
#include "objectsuser.h"
#include "osiriscommon.h"
#include "portalsportal.h"
#include "portalsportalssystem.h"
#include "xmlattribute.h"
#include "xmlattributes.h"
#include "xmldocument.h"
#include "xmlnode.h"
#include "xmlnodes.h"
#include "xmlschema.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()

//////////////////////////////////////////////////////////////////////

//const String PortalsOptionsShared::NAME = _S("name");
//const String PortalsOptionsShared::DESCRIPTION = _S("description");

//////////////////////////////////////////////////////////////////////

//const String PortalsOptionsShared::options::portal_name = _S("name");
//const String PortalsOptionsShared::options::portal_description = _S("description");

//////////////////////////////////////////////////////////////////////

PortalsOptionsShared::PortalsOptionsShared(const shared_ptr<Portal> portal) : m_portal(portal),
																	 m_options(OS_NEW XMLOptions())
{
	m_options->ensureOption(_S("acp.portal.name"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.portal.description"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.threshold.authors"), static_cast<int32>(rtNotNegative), true);
	m_options->ensureOption(_S("acp.threshold.editors"), static_cast<int32>(rtPositive), true);	
	m_options->ensureOption(_S("acp.pov.whitelist"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.pov.blacklist"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.avatar.maxwidth"), static_cast<uint32>(256), true);
	m_options->ensureOption(_S("acp.avatar.maxheight"), static_cast<uint32>(256), true);
	m_options->ensureOption(_S("acp.objects.physical_remove"), false, true);
	m_options->ensureOption(_S("acp.objects.physical_remove_days"), static_cast<int32>(0), true);
	m_options->ensureOption(_S("acp.objects.maxsize"), static_cast<uint32>(128 * 1024), true);
	m_options->ensureOption(_S("acp.objects.allow_future"), false, true);
	m_options->ensureOption(_S("acp.objects.allow_unsigned"), false, true);
	m_options->ensureOption(_S("acp.objects.bad_words"), String::EMPTY, true);


	m_options->ensureOption(_S("acp.register.terms"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.layout.tile.image"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.layout.tile.color.bg"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.layout.tile.color.fg"), String::EMPTY, true);	

	m_options->ensureOption(_S("acp.layout.css"), String::EMPTY, true);

	// Modulo del componente root
	m_options->ensureOption(_S("acp.layout.component"), String::EMPTY, true);

	// Skin
	m_options->ensureOption(_S("acp.layout.skin.id"), String::EMPTY, true);
	m_options->ensureOption(_S("acp.layout.skin.params"), String::EMPTY, true);

	m_options->ensureOption(_S("acp.layout.header"), true, true);
		
	// Lista di POV (solo UserID) accettati.
	// m_options->ensureOption(_S("pov.whitelist"), String::EMPTY);
	// m_options->ensureOption(_S("pov.blacklist"), String::EMPTY);
	
}

PortalsOptionsShared::~PortalsOptionsShared()
{

}

std::string PortalsOptionsShared::getAcceptableHash() const
{
	// Compute an unique ID that identify the combinations of shared options that can change acceptables rules below.
	std::string raw;
		
	addToMap(raw, "acp.threshold.authors");
	addToMap(raw, "acp.threshold.editors");
	addToMap(raw, "acp.pov.whitelist");
	addToMap(raw, "acp.pov.blacklist");
	addToMap(raw, "acp.avatar.maxwidth");
	addToMap(raw, "acp.avatar.maxheight");
	addToMap(raw, "acp.objects.physical_remove");
	addToMap(raw, "acp.objects.maxsize");
	addToMap(raw, "acp.objects.allow_future");
	addToMap(raw, "acp.objects.allow_unsigned");
	addToMap(raw, "acp.objects.bad_words");
	
	return CryptManager::instance()->SHA(raw.data(), raw.size()).toHex();
}

void PortalsOptionsShared::addToMap(std::string &raw, const std::string &name) const
{	
	raw += HttpParser::urlEncodeA(name);
	raw += "=";
	raw += HttpParser::urlEncodeW(m_options->getOption(name).getString().to_wide());
	raw += ";";	
}

String PortalsOptionsShared::getPortalName() const
{
	return m_options->getOption(_S("acp.portal.name"));
}

void PortalsOptionsShared::setPortalName(const String &name)
{
	m_options->setOption(_S("acp.portal.name"), name);
}

String PortalsOptionsShared::getPortalDescription() const
{
	return m_options->getOption(_S("acp.portal.description"));
}

void PortalsOptionsShared::setPortalDescription(const String &description)
{
	m_options->setOption(_S("acp.portal.description"), description);
}

ObjectsReputationThreshold PortalsOptionsShared::getAuthorsReputationThreshold() const
{
	return Convert::toReputationThreshold(static_cast<int32>(m_options->getOption(_S("acp.threshold.authors"))));	
}

void PortalsOptionsShared::setAuthorsReputationThreshold(const ObjectsReputationThreshold &threshold)
{
	m_options->setOption(_S("acp.threshold.authors"), static_cast<int32>(threshold));
}

ObjectsReputationThreshold PortalsOptionsShared::getEditorsReputationThreshold() const
{
	return Convert::toReputationThreshold(static_cast<int32>(m_options->getOption(_S("acp.threshold.editors"))));	
}

void PortalsOptionsShared::setEditorsReputationThreshold(const ObjectsReputationThreshold &threshold)
{
	m_options->setOption(_S("acp.threshold.editors"), static_cast<int32>(threshold));
}

String PortalsOptionsShared::getPovWhiteList() const
{
	return m_options->getOption(_S("acp.pov.whitelist"));
}

void PortalsOptionsShared::setPovWhiteList(const String &value)
{
	m_options->setOption(_S("acp.pov.whitelist"),value);
}

String PortalsOptionsShared::getPovBlackList() const
{
	return m_options->getOption(_S("acp.pov.blacklist"));
}

void PortalsOptionsShared::setPovBlackList(const String &value)
{
	m_options->setOption(_S("acp.pov.blacklist"),value);
}

uint32 PortalsOptionsShared::getAvatarMaxWidth() const
{
	return m_options->getOption(_S("acp.avatar.maxwidth"));
}

void PortalsOptionsShared::setAvatarMaxWidth(const uint32 &value)
{
	m_options->setOption(_S("acp.avatar.maxwidth"),value);
}

uint32 PortalsOptionsShared::getAvatarMaxHeight() const
{
	return m_options->getOption(_S("acp.avatar.maxheight"));
}

void PortalsOptionsShared::setAvatarMaxHeight(const uint32 &value)
{
	m_options->setOption(_S("acp.avatar.maxheight"),value);
}

bool PortalsOptionsShared::getObjectsPhysicalRemove() const
{
	return m_options->getOption(_S("acp.objects.physical_remove"));
}

void PortalsOptionsShared::setObjectsPhysicalRemove(const bool &value)
{
	m_options->setOption(_S("acp.objects.physical_remove"),value);
}

int32 PortalsOptionsShared::getObjectsPhysicalRemoveDays() const
{
	return m_options->getOption(_S("acp.objects.physical_remove_days"));
}

void PortalsOptionsShared::setObjectsPhysicalRemoveDays(const int32 &value)
{
	m_options->setOption(_S("acp.objects.physical_remove_days"),value);
}

uint32 PortalsOptionsShared::getObjectsMaxSize() const
{
	return m_options->getOption(_S("acp.objects.maxsize"));
}

void PortalsOptionsShared::setObjectsMaxSize(const uint32 &value)
{
	m_options->setOption(_S("acp.objects.maxsize"),value);
}

bool PortalsOptionsShared::getAllowObjectInFuture() const
{
	return m_options->getOption(_S("acp.objects.allow_future"));
}

void PortalsOptionsShared::setAllowObjectInFuture(const bool &value)
{
	m_options->setOption(_S("acp.objects.allow_future"),value);
}

bool PortalsOptionsShared::getAllowObjectUnsigned() const
{
	return m_options->getOption(_S("acp.objects.allow_unsigned"));
}

void PortalsOptionsShared::setAllowObjectUnsigned(const bool &value)
{
	m_options->setOption(_S("acp.objects.allow_unsigned"),value);
}

String PortalsOptionsShared::getBadWords() const
{
	return m_options->getOption(_S("acp.objects.bad_words"));
}

void PortalsOptionsShared::setBadWords(const String &value)
{
	m_options->setOption(_S("acp.objects.bad_words"), value);
}

String PortalsOptionsShared::getRegisterTerms() const
{
	return m_options->getOption(_S("acp.register.terms"));
}

void PortalsOptionsShared::setRegisterTerms(const String &value)
{
	m_options->setOption(_S("acp.register.terms"),value);
}

ObjectID PortalsOptionsShared::getLayoutTileImage() const
{
	return m_options->getOption(_S("acp.layout.tile.image")).getStringAscii();
}

void PortalsOptionsShared::setLayoutTileImage(const ObjectID &value)
{
	m_options->setOption(_S("acp.layout.tile.image"), value.toUTF16());
}

String PortalsOptionsShared::getLayoutTileColorBackground() const
{
	return m_options->getOption(_S("acp.layout.tile.color.bg"));
}

void PortalsOptionsShared::setLayoutTileColorBackground(const String &value)
{
	m_options->setOption(_S("acp.layout.tile.color.bg"),value);
}

String PortalsOptionsShared::getLayoutTileColorForeground() const
{
	return m_options->getOption(_S("acp.layout.tile.color.fg"));
}

void PortalsOptionsShared::setLayoutTileColorForeground(const String &value)
{
	m_options->setOption(_S("acp.layout.tile.color.fg"),value);
}

String PortalsOptionsShared::getLayoutCss() const
{
	return m_options->getOption(_S("acp.layout.css"));
}

void PortalsOptionsShared::setLayoutCss(const String &value)
{
	m_options->setOption(_S("acp.layout.css"),value);
}

String PortalsOptionsShared::getLayoutComponent() const
{
	return m_options->getOption(_S("acp.layout.component"));
}

void PortalsOptionsShared::setLayoutComponent(const String &value)
{
	m_options->setOption(_S("acp.layout.component"),value);
}

String PortalsOptionsShared::getLayoutSkin() const
{
	return m_options->getOption(_S("acp.layout.skin.id"));
}

void PortalsOptionsShared::setLayoutSkin(const String &value)
{
	m_options->setOption(_S("acp.layout.skin.id"),value);
}

String PortalsOptionsShared::getLayoutSkinParams() const
{
	return m_options->getOption(_S("acp.layout.skin.params"));
}

void PortalsOptionsShared::setLayoutSkinParams(const String &value)
{
	m_options->setOption(_S("acp.layout.skin.params"), value);
}

bool PortalsOptionsShared::getLayoutHeader() const
{
	return m_options->getOption(_S("acp.layout.header"));
}

void PortalsOptionsShared::setLayoutHeader(const bool &value)
{
	m_options->setOption(_S("acp.layout.header"), value);
}


/*
bool PortalsOptionsShared::readFile(const String &filename)
{
	shared_ptr<XMLSchema> schema(OS_NEW XMLSchema());
	schema->parseFile(utils::makeFilePath(utils::makeFolderPath(Options::instance()->getSharePath(),OS_SCHEMAS_PATH), OS_SCHEMA_OPTIONS));

	shared_ptr<XMLDocument> document(OS_NEW XMLDocument(schema));
	if(document->parseFile(filename) == false)
		return false;

	return _readXML(document);
}

bool PortalsOptionsShared::writeFile(const String &filename) const
{
	shared_ptr<XMLDocument> document(OS_NEW XMLDocument());
	if(_writeXML(document) == false)
		return false;

	return document->writeFile(filename);
}
*/

void PortalsOptionsShared::clear()
{
	m_options->toDefault();
}

bool PortalsOptionsShared::validate() const
{
	if(getPortalName().empty())
		return false;

	/*
	if(getDescription().empty())
		return false;
	*/
	
	return true;
}

void PortalsOptionsShared::unload()
{	
}

void PortalsOptionsShared::reload(const shared_ptr<IPortalDatabase> &database)
{	
	clear();

	// Remember: getPortal()->getPovUser() maybe nullptr, if the portal is subscribed and it's empty.
	if(getPortal()->getPovUser() == nullptr)
		return;

	// RAFFO: Immagina sottoscrizione da zero, userebbe i parametri di default finch� non gli arriva l'utente del POV.
	// O lascio i parametri di default molto "flessibili", o devo fare in modo che nell'allineamento l'utente del POV sia preso prima possibile.
	// Da verificare, nei file ".osiris" gli utenti sono per primi, giusto? Mettere come primo l'utente POV.

	m_options->parseString(getPortal()->getPovUser()->options);

	std::string oldAcceptableHash = m_latestAcceptableHash;
	m_latestAcceptableHash = getAcceptableHash();
		
	if( (oldAcceptableHash.empty() == false) && (m_latestAcceptableHash != oldAcceptableHash) )
	{	
		getPortal()->getSnapshotManager()->invalidateTotal(database);
	}
}

bool PortalsOptionsShared::writeString(String &data)
{
	if(validate() == false)
		return false;

	data = m_options->toString(true);
	
	return true;	
}


//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////
