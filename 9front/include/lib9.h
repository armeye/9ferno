#include <u.h>
typedef uvlong size_t;

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

typedef u32int u32;
typedef u16int u16;
typedef uchar u8;
typedef s32int s32;
typedef s16int s16;
typedef s64int s64;
