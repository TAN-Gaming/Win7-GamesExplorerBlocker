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
