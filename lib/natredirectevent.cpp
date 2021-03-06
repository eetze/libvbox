/* This file is part of libvbox
 * Copyright (C) 2019  Michael Hansen
 *
 * libvbox is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * libvbox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with libvbox; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "libvbox_p.h"

COM_WRAP_IFC(INATRedirectEvent)

uint32_t VBox::INATRedirectEvent::slot() const
{
    COM_ULong result;
    COM_GetValue(get_IFC(), Slot, result);
    return static_cast<uint32_t>(result);
}

bool VBox::INATRedirectEvent::remove() const
{
    COM_Bool result;
    COM_GetValue(get_IFC(), Remove, result);
    return static_cast<bool>(result);
}

std::u16string VBox::INATRedirectEvent::name() const
{
    std::u16string result;
    COM_GetString(get_IFC(), Name, result);
    return result;
}

VBox::NATProtocol VBox::INATRedirectEvent::proto() const
{
    COM_Enum(::NATProtocol) result;
    COM_GetValue(get_IFC(), Proto, result);
    return static_cast<NATProtocol>(result);
}

std::u16string VBox::INATRedirectEvent::hostIP() const
{
    std::u16string result;
    COM_GetString(get_IFC(), HostIP, result);
    return result;
}

int32_t VBox::INATRedirectEvent::hostPort() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), HostPort, result);
    return static_cast<int32_t>(result);
}

std::u16string VBox::INATRedirectEvent::guestIP() const
{
    std::u16string result;
    COM_GetString(get_IFC(), GuestIP, result);
    return result;
}

int32_t VBox::INATRedirectEvent::guestPort() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), GuestPort, result);
    return static_cast<int32_t>(result);
}
