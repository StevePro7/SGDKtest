# SGDKtest
Test repository to rebuild SGDK library
<br />
https://github.com/Stephane-D/SGDK


https://twitter.com/bigevilboss
blog

https://blog.bigevilcorporation.co.uk/
https://blog.bigevilcorporation.co.uk/2012/02/28/sega-megadrive-1-getting-started/


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