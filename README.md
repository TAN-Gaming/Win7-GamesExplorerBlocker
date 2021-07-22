# Win7-GamesExplorerBlocker
- Disable Windows 7 Games Explorer completely.
- Remove <code>rundll32.exe</code> process from your games.

[release_link]: https://github.com/TAN-Gaming/Win7-GamesExBlocker/releases

# How to use 
- Download prebuilt DLL from the [release section][release_link] or build from source.
- Replace the file <code>GameUXLegacyGDFs.dll</code> in the system folder.
- For 64-Bit Windows, you need to replace the files in <code>Windows\System32</code> using 64-Bit version and in <code>Windows\SysWOW64</code> using 32-Bit version.

# Build instructions
You can built it using CMake, Code::Blocks or any IDE by copying code in the file <code>DllMain.c</code>
to your DLL project and set the output filename as <code>GameUXLegacyGDFs.dll</code> .
