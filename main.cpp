#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <CommCtrl.h>

HWND hwnd;
LPCWSTR szClassName = L"appName";
LPCWSTR parentCapTitle = L"Startup Code";
LPCWSTR Erro01 = L"ERRor01: RegisterClassW issue to tend to ";
LPCWSTR Erro02 = L"ERRo202: ParentWindowCreateW issue to tend to ";

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	PSTR szCMdLine,
	int iCmdShow)
{
	MessageBoxW(NULL, L"Yes, the window is working", L"Window", 0);


	return 0;
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	return 0;
}

