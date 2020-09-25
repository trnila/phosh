/*
 * Copyright (C) 2018 Purism SPC
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * Author: Guido Günther <agx@sigxcpu.org>
 */
#pragma once

#include "dbus/phosh-gnome-shell-dbus.h"
#include <glib-object.h>

G_BEGIN_DECLS

#define PHOSH_TYPE_GNOME_SHELL_MANAGER             (phosh_gnome_shell_manager_get_type ())
G_DECLARE_FINAL_TYPE (PhoshGnomeShellManager, phosh_gnome_shell_manager, PHOSH, GNOME_SHELL_MANAGER,
                      PhoshGnomeShellDBusShellSkeleton)

PhoshGnomeShellManager *phosh_gnome_shell_manager_new      (void);

G_END_DECLS
