/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#define _DEFAULT_SOURCE
#include "os.h"
#include "tglobal.h"

void osInit() {

#ifdef _TD_POWER_
  if (configDir[0] == 0) {
    strcpy(configDir, "/etc/power");
  }
  strcpy(tsDataDir, "/var/lib/power");
  strcpy(tsLogDir, "/var/log/power");
  strcpy(tsLogbakDir, "/var/log/power/bak");
  strcpy(tsScriptDir, "/etc/power");
#else
  if (configDir[0] == 0) {
    strcpy(configDir, "/etc/taos");
  }
  strcpy(tsDataDir, "/var/lib/taos");
  strcpy(tsLogDir, "/var/log/taos");
  strcpy(tsLogbakDir, "/var/log/taos/bak");
  strcpy(tsScriptDir, "/etc/taos");
#endif

  strcpy(tsVnodeDir, "");
  strcpy(tsDnodeDir, "");
  strcpy(tsMnodeDir, "");
  strcpy(tsOsName, "Linux");
}