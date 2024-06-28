#pragma once
#include "framework.h"
#include "WinAPIClass.h"
#define MAX_LOADSTRING 100

// static : Ŭ���� ��ü�� �ƴ�, Ŭ���� ��ü�� ���ԵǴ� ������ �޼��带 ǥ���ϴ� ������.
// ���� : ���α׷��� �����ϸ� ����, ���α׷��� ����¸� ����.

class WinApp
{
private:
	static WinApp* instance;

public:
	static WinApp* GetInstance();

private:
	HINSTANCE hInst; 
	HWND hWnd;
	TCHAR szTitle[MAX_LOADSTRING];   // (T)CHAR : T�� ������ ȯ�濡 ���� ���ڿ��� ó���� �� ����.
	TCHAR szWindowClass[MAX_LOADSTRING];            

public:
	ATOM                RegisterWindowClass(HINSTANCE hInstance);
	BOOL                CreateMainWindow(int nCmdShow);
	int					MessageLoop();
	LRESULT CALLBACK    WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	
public:
	WinApp();
	~WinApp() = default;

};

