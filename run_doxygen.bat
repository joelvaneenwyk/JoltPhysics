@echo off
if exist "%~dp0%Build\Doxygen" del "%~dp0%Build\Doxygen" /s /q > NUL
doxygen
pause
