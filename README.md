# Win7-GamesExplorerBlocker
- Disable Windows 7 Games Explorer completely.
- Remove `rundll32.exe` process from your games.

[release_link]: https://github.com/TAN-Gaming/Win7-GamesExBlocker/releases

# How to use 
- Download prebuilt DLL from the [release section][release_link] or build from source.
- Replace the file `GameUXLegacyGDFs.dll` in the system folder.
- For 64-Bit Windows, you need to replace the files in `C:\Windows\System32` using 64-Bit version and in `C:\Windows\SysWOW64` using 32-Bit version.

# Build instructions
You can built it using CMake, Code::Blocks or any IDE by copying code in the file `DllMain.c`
to your DLL project and set the output filename as `GameUXLegacyGDFs.dll`.
