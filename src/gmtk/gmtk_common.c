/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * gmtk_common.c
 * Copyright (C) Kevin DeKorte 2006 <kdekorte@gmail.com>
 * 
 * gmtk_common.c is free software.
 * 
 * You may redistribute it and/or modify it under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 * 
 * gmtk_common.c is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with playlist.c.  If not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#include "gmtk_common.h"
#include <libintl.h>

void gmtk_get_allocation(GtkWidget * widget, GtkAllocation * allocation)
{
    gtk_widget_get_allocation(widget, allocation);
}

GdkWindow *gmtk_get_window(GtkWidget * widget)
{
    return gtk_widget_get_window(widget);
}

gboolean gmtk_get_visible(GtkWidget * widget)
{
    return gtk_widget_get_visible(widget);
}

gboolean gmtk_widget_get_realized(GtkWidget * widget)
{
    return gtk_widget_get_realized(widget);
}

const gchar *gmtk_version()
{
#ifdef ENABLE_NLS
    bindtextdomain(GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
    bind_textdomain_codeset(GETTEXT_PACKAGE, "UTF-8");
//    textdomain(GETTEXT_PACKAGE);
#endif
    return VERSION;
}