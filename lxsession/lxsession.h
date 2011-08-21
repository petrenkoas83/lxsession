/*
 *      lxsession.h
 *
 *      Copyright 2009 PCMan <pcman.tw@gmail.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

#ifndef __LXSESSION_H__
#define __LXSESSION_H__

#include <gtk/gtk.h>

G_BEGIN_DECLS

typedef enum{
    LXS_RELOAD,
    LXS_EXIT,
    LXS_LAST_CMD
}LXS_CMD;

#define CONFIG_FILE_NAME    "desktop.conf"

GKeyFile* load_session_config( const char* config_filename );
void lxsession_quit();

void send_internal_command( int cmd );

void lxsession_show_msg(GtkWindow* parent, GtkMessageType type, const char* msg);

G_END_DECLS

#endif
