#include <windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	MessageBox(
		NULL,
		"Hello World!",
		"C Hello World",
		MB_OK | MB_ICONASTERISK
	);
	return 0;
}