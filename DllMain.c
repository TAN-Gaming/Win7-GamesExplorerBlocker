/*
 * Win7-GamesExplorerBlocker - Disable Windows 7 Games Explorer completely and
 * remove rundll32.exe process from your games.
 *
 * Written in 2021 by Thamatip Chitpong <tangaming123456@outlook.com>
 *
 * To the extent possible under law, the author(s) have dedicated all copyright
 * and related and neighboring rights to this software to the public domain
 * worldwide. This software is distributed without any warranty.
 *
 * You should have received a copy of the CC0 Public Domain Dedication along
 * with this software. If not, see
 * <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hInstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    /* This is just a dummy DLL */
    return TRUE;
}
