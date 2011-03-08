/* 
 Patchdiff2
 
 Portions (C) 2011 Alexander Pick
 Portions (C) 2010 Nicolas Pouvesle
 Portions (C) 2007 - 2009 Tenable Network Security, Inc.
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License version 2 as 
 published by the Free Software Foundation.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef __BACKUP_H__
#define __BACKUP_H__

#include "sig.hpp"

// 1: first format
// 2: adds str hash
#define PDIFF_BACKUP_VERSION 3

void backup_save_results(deng_t *);
int backup_load_results(deng_t **, options_t *);

#endif