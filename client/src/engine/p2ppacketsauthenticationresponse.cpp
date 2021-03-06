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
#include "p2ppacketsauthenticationresponse.h"

#include "buffer.h"
#include "datatree.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()
namespace p2p {
namespace packets {

//////////////////////////////////////////////////////////////////////

const String AuthenticationResponse::PUBLIC_KEY = _S("public_key");

//////////////////////////////////////////////////////////////////////

AuthenticationResponse::AuthenticationResponse() : PacketBase(ptAuthenticationResponse)
{

}

AuthenticationResponse::~AuthenticationResponse()
{

}

Buffer AuthenticationResponse::getPublicKey() const
{
	return getData()->getV(PUBLIC_KEY);
}

void AuthenticationResponse::setPublicKey(const Buffer &publicKey) const
{
	getData()->setV(PUBLIC_KEY, publicKey);
}

bool AuthenticationResponse::create()
{
	return true;
}

bool AuthenticationResponse::parse()
{
	return true;
}

//////////////////////////////////////////////////////////////////////

} // packets
} // p2p
OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////
