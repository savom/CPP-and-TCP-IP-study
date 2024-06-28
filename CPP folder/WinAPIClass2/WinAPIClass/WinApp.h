#pragma once
#include "framework.h"
#include "WinAPIClass.h"
#define MAX_LOADSTRING 100

// static : Ŭ���� ��ü�� �ƴ�, Ŭ���� ��ü�� ���ԵǴ� ������ �޼��带 ǥ���ϴ� ������.
// ���� : ���α׷��� �����ϸ� ����, ���α׷��� ����¸� ����.

// ��� ����(Device Context, DC)
// : �����쿡�� �ؽ�Ʈ/�̹��� ���� ����� �� �ִ� ����.
// �����쿡 ���𰡸� ����Ϸ��� '�ݵ��' ��� ����(DC)�� �ʿ��ϴ�.

// �����쿡�� ��� ������ �������� �Լ�/ �����ϴ� �Լ�.
// - GetDC(), ReleaseDC() : WM_PAINT �̿��� �޼������� ���.
// - BeginPaint(), EndPaint() : WM_PAINT���� ���.

// ��� ������ �������� ���, �ݵ�� '����'�ؾ� �Ѵ�!

// TCHAR 
// : ������Ʈ ������ ����, char <-> WCHAR�� ����Ǵ� ���� ������ ����.

// <���ڿ� �Լ�>
// - strlen, strcpy_s, strcat_s, strcmp

// WCHAR
// -wcslen, wcscpy_s, wcscat_s, wcscmp

// TCHAR
// - _tcslen, _tcscpy_s, _tcscat_s, _tcscmp

// ������� ���� ��Ȳ���� �ٽ� �׸���.(������ ��� ������ ���� �׸�)
// - ��ȿȭ ������ �߻����� ��
// - �������� ũ�Ⱑ ����Ǿ��� ��

// �ڡڡڡڡ�
// �����찡 �ֱ������� �ٽ� �׷����� ������
// WM_PAINT ���� �޼������� ���𰡸� ����ϴ� ���� �ٶ������� ����!

// ����� �ؽ�Ʈ/�̹����� ���� -> WM_PAINT ��
// �ؽ�Ʈ/�̹��� �� ���𰡸� ����ϴ� �ڵ� -> WM_PAINT

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
	
private:
	TCHAR* text;



public:
	ATOM                RegisterWindowClass(HINSTANCE hInstance);
	BOOL                CreateMainWindow(int nCmdShow);
	int					MessageLoop();
	LRESULT CALLBACK    WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	
public:
	WinApp();
	~WinApp() = default;

};

