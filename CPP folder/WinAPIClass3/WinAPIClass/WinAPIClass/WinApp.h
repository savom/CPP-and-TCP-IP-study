#pragma once
#include "framework.h"
#include "WinAPIClass.h"
#define MAX_LOADSTRING 100

// static : Ŭ���� ��ü�� �ƴ�, Ŭ���� ��ü�� ���ԵǴ� ������ �޼��带 ǥ���ϴ� ������.
// ���� : ���α׷��� �����ϸ� ����, ���α׷��� ����¸� ����.

// ������ ���� ����
// - ������ �� ���� : HPEN
// - ������ �� ���� : HBRUSH

// �ڡڡڡ� ������ ������ �����ϴ� ���
// 1. ���ϴ� ���� ��, �귯�� ����
// 2. ������ ��, �귯�� ����...
// 3. ���� �׸���!
// 4. ������ ����ϴ� ��, �귯�� ����.
// 5. �����ߴ� ��, �귯�� ����

class WinApp
{
private:
	static WinApp* instance;
private:
	int index;
	COLORREF color;

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

