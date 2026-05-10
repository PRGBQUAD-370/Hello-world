#include <windows.h>
#include <iostream>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	MessageBoxA(
		NULL,
		"Hello World!",
		"C++ Hello World",
		MB_OK | MB_ICONASTERISK
	);
	return 0;
}