/*
 *
 * Copyright (C) 2000 Athicha Muthitacharoen (athicha@mit.edu)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 *
 */

#include "messages.h"
#include <xfs/xfs_pioctl.h>
#include "crypt.h"

u_int64_t cache_entry::nextxh;
ihash<nfs_fh3, cache_entry, &cache_entry::nh,
  &cache_entry::nlink> nfsindex;
ihash<xfs_handle, cache_entry, &cache_entry::xh,
  &cache_entry::xlink> xfsindex;

void nfs_receive (xfscall *xfsc, clnt_stat err) {

}

int
xfs_wakeup (xfscall *xfsc) {

  return 0;
}

int 
xfs_getroot (xfscall *xfsc) {

#if DEBUG > 0
  warn << "get root!!\n";
#endif

  sfsc->call (SFSPROC_GETFSINFO, NULL, 
	      ((xfs_getroot_args*) xfsc->getvoidarg ())->fsi,
	      wrap (nfs_receive, xfsc));
  return 0;

}

int xfs_getnode (xfscall *xfsc) {

  return 0;
}

int xfs_getattr (xfscall *xfsc) {

  return 0;
}

int xfs_getdata (xfscall *xfsc) {

  return 0;
}

int xfs_inactivenode (xfscall *xfsc) {

  return 0;
}

int xfs_open (xfscall *xfsc) {

  return 0;
}

int xfs_putdata (xfscall *xfsc) {

  return 0;
}

int xfs_putattr (xfscall *xfsc) {

  return 0;
}

int xfs_create (xfscall *xfsc) {

  return 0;
}

int xfs_mkdir (xfscall *xfsc) {

  return 0;
}

int xfs_link (xfscall *xfsc) {

  return 0;
}

int xfs_symlink (xfscall *xfsc) {

  return 0;
}

int xfs_remove (xfscall *xfsc) {

  return 0;
}

int xfs_rmdir (xfscall *xfsc) {

  return 0;
}

int xfs_rename (xfscall *xfsc) {

  return 0;
}

int xfs_pioctl (xfscall *xfsc) {

  return 0;
}

void cbdispatch(svccb *sbp) {

}