//
// VMime library (http://www.vmime.org)
// Copyright (C) 2002-2005 Vincent Richard <vincent@vincent-richard.net>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//

#include "vmime/net/simpleAuthenticator.hpp"


namespace vmime {
namespace net {


simpleAuthenticator::simpleAuthenticator()
{
}


simpleAuthenticator::simpleAuthenticator(const string& username, const string& password)
	: m_username(username), m_password(password)
{
}


const authenticationInfos simpleAuthenticator::requestAuthInfos() const
{
	return (authenticationInfos(m_username, m_password));
}


const string& simpleAuthenticator::getUsername() const
{
	return (m_username);
}


void simpleAuthenticator::setUsername(const string& username)
{
	m_username = username;
}


const string& simpleAuthenticator::getPassword() const
{
	return (m_password);
}


void simpleAuthenticator::setPassword(const string& password)
{
	m_password = password;
}


} // net
} // vmime