/*-------------------------------------------------------------------------
 *
 * pqsignal.h
 *	  prototypes for the reliable BSD-style signal(2) routine.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id: pqsignal.h,v 1.7 1999/02/13 23:22:43 momjian Exp $
 *
 * NOTES
 *	  This shouldn't be in libpq, but the monitor and some other
 *	  things need it...
 *
 *-------------------------------------------------------------------------
 */
#ifndef PQSIGNAL_H
#define PQSIGNAL_H

#include "postgres.h"

typedef void (*pqsigfunc) (int);

extern pqsigfunc pqsignal(int signo, pqsigfunc func);

#endif	 /* PQSIGNAL_H */
