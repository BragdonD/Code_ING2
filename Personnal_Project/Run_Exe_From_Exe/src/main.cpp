#include <iostream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

bool launchProcess(TCHAR *path, LPTSTR lCmdArgs);

int main()
{
    char path[] = "test2.exe";
    char commands[] = "test2.exe test";
    launchProcess(TEXT(path), commands);
    return 0;
}

/**
 * @brief Function that allows to launch a process. it will launch an exe inside of the exe already launch. The two programs are independant.
 * 
 * @param path path to the executable to launch
 * @param lCmdArgs Argument to path in command line. The first argument need to be the name of the executable.
 * @return true if the process creation has success else false
 */
bool launchProcess(TCHAR *path, LPTSTR lCmdArgs){
    STARTUPINFO si;
    PROCESS_INFORMATION pi;


    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );

    // Start the child process. 
    if( !CreateProcess(
        path,   // No module name (use command line)
        lCmdArgs,        // Command line
        NULL,           // Process handle not inheritable
        NULL,           // Thread handle not inheritable
        FALSE,          // Set handle inheritance to FALSE
        0,              // No creation flags
        NULL,           // Use parent's environment block
        NULL,           // Use parent's starting directory 
        &si,            // Pointer to STARTUPINFO structure
        &pi)             // Pointer to PROCESS_INFORMATION structure
    ) 
    {
        printf( "CreateProcess failed (%d).\n", GetLastError() );
        return false;
    }

    // Wait until child process exits.
    WaitForSingleObject( pi.hProcess, INFINITE );

    // Close process and thread handles. 
    CloseHandle( pi.hProcess );
    CloseHandle( pi.hThread );
    return true;
}