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
    /* Perform actions based on the reason for calling. */
    switch (fdwReason)
    {
        /* Initialize once for each new process, Return FALSE to fail DLL load. */
        case DLL_PROCESS_ATTACH:
            break;

        /* Do thread-specific initialization. */
        case DLL_THREAD_ATTACH:
            break;

        /* Do thread-specific cleanup. */
        case DLL_THREAD_DETACH:
            break;

        /* Perform any necessary cleanup. */
        case DLL_PROCESS_DETACH:
            break;
    }

    return TRUE;  // Successful DLL_PROCESS_ATTACH.
}

