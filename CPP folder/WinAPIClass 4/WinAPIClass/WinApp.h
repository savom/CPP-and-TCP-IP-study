#pragma once
#include "framework.h"
#include "WinAPIClass.h"
#define MAX_LOADSTRING 100

// static : Ŭ���� ��ü�� �ƴ�, Ŭ���� ��ü�� ���ԵǴ� ������ �޼��带 ǥ���ϴ� ������.
// ���� : ���α׷��� �����ϸ� ����, ���α׷��� ����¸� ����.

// ���� �޽���.
// ���콺, Ű���� ���� �޽���.

// ���콺 �޼���.
// WM_LBUTTONDOWN,
// WM_LBUTTONUP
// WM_RBUTTONDOWN,
// WM_RBUTTONUP
// WM_MOUSEMOVE : ���콺�� ������ �� �߻��ϴ� �޼���
// ....

class WinApp
{
private:
	static WinApp* instance;

private:
	RECT rect;
	bool isDrag;
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

