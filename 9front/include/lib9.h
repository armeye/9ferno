#include <u.h>
typedef usize size_t;

#define	Rendez	xRendez
#include <libc.h>
#undef Rendez


/*
 *	Extensions for Inferno to basic libc.h
 */

#define	setbinmode()
#define	USE_FPdbleword
#define	MQUIET 0x0020 /* only for kbind. to shut it up */

#define	DBG	if(debug)print
