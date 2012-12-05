
/* Copyright (c) 2011, Stefan Eilemann <eile@eyescale.ch>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License version 2.1 as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <hwsd/version.h>
#include <sstream>

namespace hwsd
{

int Version::getMajor()
{
    return HWSD_VERSION_MAJOR;
}

int Version::getMinor()
{
    return HWSD_VERSION_MINOR;
}

int Version::getPatch()
{
    return HWSD_VERSION_PATCH;
}

std::string Version::getString()
{
    std::ostringstream version;
    version << HWSD_VERSION_MAJOR << '.' << HWSD_VERSION_MINOR << '.'
            << HWSD_VERSION_PATCH;
    return version.str();
}

}
