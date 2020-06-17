# SGDKtest
Test repository to rebuild SGDK library
<br />
https://github.com/Stephane-D/SGDK


https://twitter.com/bigevilboss
blog

https://blog.bigevilcorporation.co.uk/
https://blog.bigevilcorporation.co.uk/2012/02/28/sega-megadrive-1-getting-started/


TAGS
1.0	initial cut having all inline code in header files only [not complete!]
2.0	latest SGDK 1.51 all header files "as is" but all impl in *.c files
3.0 refactor *.c files into static lib so include header files lib + pdb


New library
genesis.h

header files that are in the "inc" folder but don't seem to be included:
everdrive.h
fat16.h
z80_vgm.h


14/06/2020
TODO
move main into "src" folder and redo

build lib into header and static lib?

repeat the entire projects / tutorials using the new way


15/06/2020
Static library
TargetName	_genesis

Properties
C/C++
Output Files
Program Database filename
$(IntDir)$(TargetName).pdb

Reference:
https://stackoverflow.com/questions/7575298/static-library-debug-symbols

Real world example of using the new _genesis.h _genesis.lib _genesis.pdb
E:\Steven\XNA\SGDK\steveproXNA\test04_lib\lib


Finally, example with static lib and resource:
E:\Steven\XNA\SGDK\steveproXNA\test05_lib_res

Navigate to dev folder + build content [resources]
e.g.
cd E:\Steven\XNA\SGDK\steveproXNA\test05_lib_res\dev
%GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen

Add code and dependency references for both F5 and Ctrl+1


Final test for today was to try and integrate Remote debugging
experiments in the past on VS2015 with this latest dev setup

However, doesn't add any value because Ctrl+F5 does not rebuild
i.e. would not "take" any latest so defeats the purpose;
would have to run build.bat anyway so = no value add..!!


16/06/2020
So I updated some missing extern variables from *.h files to *.c
and stripped out arrays of multiples to singles
e.g.
fat16.c
maths.c
z80)vgm.c
tab_cnv.c
tab_vol.c
sprite_eng.h

Going thru Stephane-D examples
watch out for this:
#include <genesis.h>

e.g.
02-Bench
I must wrap every instance of this with this:
#ifdef _CONSOLE
#include "_genesis.h"
#pragma warning( disable : 4244 ) 
#else
#include <genesis.h>
#endif


TODO
tag the latest 3.1

examples
01-astrofra		NULL
02-bench has a lot of warnings
05-image		NULL


17/06/2020
IMPORTANT
good example of readInput() here
e:\Steven\XNA\SGDK\TutorialSGDK\09-sprite\dev\src\main.c
Maybe more aligned to my previous InputManager

good exmple on NTSC vs. PAL?
e:\Steven\XNA\SGDK\TutorialSGDK\10-xgmplayer\dev\src\main.c