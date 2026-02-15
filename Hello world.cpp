// main.cpp
// Works when compiled as console app but hides the window immediately

#include <windows.h>
#include <iostream>

int main()
{
    // Hide the console window
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);

    // This message will appear in a popup (since console is hidden)
    MessageBoxA(
        NULL,
        "Hello World!",
        "C++ Hello World",
        MB_OK | MB_ICONASTERISK
    );

    // If you really want console output → uncomment next lines
    // AllocConsole();
    // freopen("CONOUT$", "w", stdout);
    // std::cout << "Hello from hidden console!\n";

    return 0;
}