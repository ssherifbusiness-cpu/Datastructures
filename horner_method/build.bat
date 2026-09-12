@ECHO off

SET CC=GCC

SET DEBUG_LEVEL=-O3
if "%~1"=="debug" (
  SET DEBUG_LEVEL=-O1 -g
)

%CC% *.c %DEBUG_LEVEL%
.\a.exe

