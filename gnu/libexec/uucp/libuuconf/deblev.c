/* deblev.c
   Get the UUCP debugging level.

   Copyright (C) 1992 Ian Lance Taylor

   This file is part of the Taylor UUCP uuconf library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License
   as published by the Free Software Foundation; either version 2 of
   the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

   The author of the program may be contacted at ian@airs.com or
   c/o Cygnus Support, 48 Grove Street, Somerville, MA 02144.
   */

#include "uucnfi.h"

#if USE_RCS_ID
const char _uuconf_deblev_rcsid[] = "$Id$";
#endif

/* Get the UUCP debugging level.  */

int
uuconf_debuglevel (pglobal, pzdebug)
     pointer pglobal;
     const char **pzdebug;
{
  struct sglobal *qglobal = (struct sglobal *) pglobal;

  *pzdebug = qglobal->qprocess->zdebug;
  return UUCONF_SUCCESS;
}
