@echo off

for /d %%T in (*) do @(
	echo build: %%T ... start.
	setlocal
	call setenv.bat
	pushd %%T & make %* & popd
	endlocal
	echo build: %%T ... done.
)
