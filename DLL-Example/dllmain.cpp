#include "pch.h"

#include <iostream>
#include <chrono>

DWORD WINAPI MainThread(HMODULE hModule);

BOOL APIENTRY DllMain(
	HMODULE hModule,
	DWORD ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CloseHandle(
			CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr)
		);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

DWORD WINAPI MainThread(HMODULE hModule)
{
	// Create a console.
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);

	std::cout << "===========================" << std::endl;
	std::cout << "= Hello from example DLL! =" << std::endl;
	std::cout << "===========================" << std::endl;

	// Main loop.
	bool isRunning = true;
	while (isRunning)
	{
		/* KEYBOARD INPUT HANDLING */
		if (GetAsyncKeyState(VK_END) & 0x01) // Exit DLL.
			isRunning = false;
		if (GetAsyncKeyState(VK_TAB) & 0x01) // Print a message when TAB gets pressed.
			std::cout << "TAB key pressed." << std::endl;
	}

	if (f) fclose(f);
	FreeConsole();
	FreeLibraryAndExitThread(hModule, 0);
	return 0;
}
