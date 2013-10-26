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

#ifndef _OS_UPNP_MINIUPNP_H
#define _OS_UPNP_MINIUPNP_H

//////////////////////////////////////////////////////////////////////

#define STATICLIB

//////////////////////////////////////////////////////////////////////

#define OS_MINIUPNP_PROTOCOL_TCP			"TCP"
#define OS_MINIUPNP_PROTOCOL_UDP			"UDP"

//////////////////////////////////////////////////////////////////////

#include "miniupnp/miniwget.h"
#include "miniupnp/miniupnpc.h"
#include "miniupnp/upnpcommands.h"

//////////////////////////////////////////////////////////////////////

#undef STATICLIB

//////////////////////////////////////////////////////////////////////

#endif // _OS_UPNP_MINIUPNP_H
