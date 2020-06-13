#include "main.h"

void myJoyHandler( u16 joy, u16 changed, u16 state )
{
	if( joy != JOY_1 )
	{
		return;
	}

	if( state & changed & BUTTON_A )
	{
	}
}

void main()
{
	u8 num = 9;
	u8 test = z80_vgm[ 2 ];
	u8 code = HALT_Z80_ON_DMA;

	VAR2REG_B( 1, 2 );

	VRAM_releaseRegion( NULL );
	XGM_resumePlay();
	YM2612_enableDAC();
	Z80_init();

	JOY_init();
	JOY_setEventHandler( myJoyHandler );

	test = evd_mmcInit();
	return;
}