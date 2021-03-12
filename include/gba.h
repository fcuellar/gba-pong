//gba.h
//Francisco Cuellar
//Game goes up to 19
#include <gba_affine.h>
#include <gba_compression.h>
#include <gba_console.h>
#include <gba_dma.h>
#include <gba_input.h>
#include <gba_interrupt.h>
#include <gba_multiboot.h>
#include <gba_sio.h>
#include <gba_sprites.h>
#include <gba_systemcalls.h>
#include <gba_timers.h>
#include <gba_video.h>
//



#define SCREEN_WIDTH	240
#define SCREEN_HEIGHT	160

typedef unsigned char	uint8;
typedef unsigned short	uint16;
typedef unsigned int 	uint32;

#define MEM_IO 			0x04000000
#define VRAM			0x06000000

#define VIDEOMODE		0x0003
#define BGMODE			0x0400

#define REG_DISPLAY			(*(volatile uint32 *) (MEM_IO))
#define REG_DISPLAY_VCOUNT	(*(volatile uint32 *) (MEM_IO + 0x0006))
#define REG_KEY_INPUT		(*(volatile uint32 *) (MEM_IO + 0x0130))

#define A			1
#define B			2
#define SELECT		4
#define START		8
#define RIGHT		16
#define LEFT		32
#define UP			64
#define DOWN		128
#define R			256
#define L 			512

#define SCREENBUFFER	((volatile uint16 *) VRAM)

struct Rect {
	uint32 x, y;
	uint32 w, h;
} player, prevPlayer, ball, prevBall, score, scoreline, vletterblock,hletterblock,eraseblock;
