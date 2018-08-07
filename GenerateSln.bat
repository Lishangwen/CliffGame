@echo off
set UnrealEditorPath=D:\GameEngines\UnrealEngine\Engine\Engine\Binaries\DotNET\UnrealBuildTool.exe


%UnrealEditorPath% -ProjectFiles -project=%~dp0CliffGame.uproject -game -progress

rem -XCODEPROJECTFILE
pause