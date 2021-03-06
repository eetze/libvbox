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

COM_WRAP_IFC(IGuestMouseEvent)

VBox::GuestMouseEventMode VBox::IGuestMouseEvent::mode() const
{
    COM_Enum(::GuestMouseEventMode) result;
    COM_GetValue(get_IFC(), Mode, result);
    return static_cast<GuestMouseEventMode>(result);
}

int32_t VBox::IGuestMouseEvent::x() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), X, result);
    return static_cast<int32_t>(result);
}

int32_t VBox::IGuestMouseEvent::y() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), Y, result);
    return static_cast<int32_t>(result);
}

int32_t VBox::IGuestMouseEvent::z() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), Z, result);
    return static_cast<int32_t>(result);
}

int32_t VBox::IGuestMouseEvent::w() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), W, result);
    return static_cast<int32_t>(result);
}

int32_t VBox::IGuestMouseEvent::buttons() const
{
    COM_Long result;
    COM_GetValue(get_IFC(), Buttons, result);
    return static_cast<int32_t>(result);
}
