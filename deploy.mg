#! /usr/bin/env bash
set -uvx
set -e
cwd=`pwd`
pro64.cmd quick-00.pro -f
#cd quick-00.64.dynamic/release
#cd build/Desktop_Qt_6_7_2_shared_MinGW_w64_MINGW64_MSYS2-Release/release
cd quick-00.64.dynamic/release/
cp -rp `which libgcc_s_seh-1.dll` .
cp -rp `which libstdc++-6.dll` .
cp -rp `which libwinpthread-1.dll` .
windeployqt.exe --qmldir $cwd quick-00.exe
rm -rf vc_redist.x64.exe
