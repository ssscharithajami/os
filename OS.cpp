#include <stdio.h>
#include <windows.h>

int main() {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    if (CreateProcess(NULL, "notepad.exe", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
        printf("Parent process. Created child process with PID = %ld\n", pi.dwProcessId);
        WaitForSingleObject(pi.hProcess, INFINITE);
        printf("Child process finished.\n");
    } else {
        printf("Process creation failed.\n");
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return 0;
}
