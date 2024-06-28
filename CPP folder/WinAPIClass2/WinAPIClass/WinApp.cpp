#include "WinApp.h"

// �ڡڡڡ� Ŭ������ static ������ �ҽ� ���Ͽ��� �ݵ�� ���� �ؾ��Ѵ�!
WinApp* WinApp::instance = nullptr;

LRESULT WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    return WinApp::GetInstance()->WndProc(hWnd, message, wParam, lParam);
}


WinApp* WinApp::GetInstance()
{
    return instance;
}

ATOM WinApp::RegisterWindowClass(HINSTANCE hInstance)
{
    hInst = hInstance;

    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_WINAPICLASS, szWindowClass, MAX_LOADSTRING);

    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = ::WndProc; // ���� �Լ��� �ּ�'��' ����.
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WINAPICLASS));
    wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_WINAPICLASS);
    wcex.lpszClassName = szWindowClass;
    wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

BOOL WinApp::CreateMainWindow(int nCmdShow)
{
    hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInst, nullptr);

    if (!hWnd)
    {
        return FALSE;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    return TRUE;
}

int WinApp::MessageLoop()
{
    // MSG : �޽��� ����ü
    MSG msg;

    // GetMessage() : �޽��� ť���� �޽����� �������� �Լ�.

    
    // �⺻ �޽��� �����Դϴ�:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        // TranslateMessage()
        // �޼����� �������� ������ �߰��ϴ� �Լ�.
        // ���� ������ WPARAM, LPARAM�� ��
        TranslateMessage(&msg);
        // �޼��� : Ű���� �Է�
        // �������� : AŰ, �ι� �Է� ���...

        // �޼��� ó�� �Լ��� �޼����� ����.(�޼��� ó�� �Լ� ȣ��!)
        DispatchMessage(&msg);
        
    }

    return (int)msg.wParam;
}

LRESULT WinApp::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {

        // WM_CREATE : �����츦 �������� �� �߻��ϴ� �޼���.
        // (�Ϲ������� ���𰡸� �ʱ�ȭ�� �� ���)
        case WM_CREATE:
            {
                text = nullptr;
            }
            break;
        // WM_LBUTTONDOWN : ���콺 ���� ��ư�� ������ �� �߻��ϴ� �޼���.
        case WM_LBUTTONDOWN:
            {
                //// "���콺�� Ŭ���߽��ϴ�!" �ؽ�Ʈ ���! 
                #pragma region ���� �ڵ�
                
                                //// 1. ��� ������ ��������!
                                //HDC hdc = GetDC(hWnd);

                                //const TCHAR* text = _T("���콺�� Ŭ���߽��ϴ�!");
                                //TextOut(hdc, 0, 0, text, _tcslen(text));

                                //ReleaseDC(hWnd, hdc);
                #pragma endregion

                #pragma region InvalidateRect
                                const TCHAR* text = _T("���콺�� Ŭ���߽��ϴ�!");
                                int length = _tcslen(text) + 1;
                                this->text = new TCHAR[length];
                                _tcscpy_s(this->text, length, text);

                                // InvalidateRect()
                                // Invalidate : ��ȿȭ�ϴ�!
                                // ���簢�� ������ ��ȿȭ�ϴ� �Լ�!(= �ٽ� �׸���)

                                // InvalidateRect([������ �ڵ�], [���簢�� ����], [����� ����])
                                // [���簢�� ����] 
                                // : NULL�� ���, ������ ��ü�� ��ȿȭ �������� ����.
                                InvalidateRect(hWnd, NULL, TRUE);
                #pragma endregion
            }
            break;
        case WM_COMMAND:
            {
                int wmId = LOWORD(wParam);
                // �޴� ������ ���� �м��մϴ�:
                switch (wmId)
                {
                    case IDM_ABOUT:
                        // DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                        break;
                    case IDM_EXIT:
                        DestroyWindow(hWnd);
                        break;
                    default:
                        return DefWindowProc(hWnd, message, wParam, lParam);
                }
            }
            break;
        case WM_PAINT:
            {
                PAINTSTRUCT ps;
                // HDC : ��� ���� �ڵ�.
                HDC hdc = BeginPaint(hWnd, &ps);
                
                // TODO: ���⿡ hdc�� ����ϴ� �׸��� �ڵ带 �߰��մϴ�...
                /*  if (text != nullptr)
                {
                    TextOut(hdc, 0, 0, text, _tcslen(text));
                }*/

                #pragma region _TextOut
                // TextOut() : �ؽ�Ʈ�� ����ϴ� �Լ�
                // TextOut([��� ����], x, y, [���ڿ�], [���ڿ� ����])
                // TextOut(hdc, 0, 0, text, _tcslen(text));
#pragma endregion

                #pragma region _DrawText
                            //// DrawText([��� ����, [���ڿ�], [���ڿ� ����]
                            ////          [���簢�� ����], [��Ÿ��])

                            //// RECT : ���簢���� ������ �����ϴ� ����ü
                            //RECT rect = { 0, 0, 50, 50 };
                            //DrawText(hdc, text, _tcslen(text), &rect, DT_LEFT);
            #pragma endregion

                // ���� ���!
                // Rectangle() : ���簢���� �׸��� �Լ�.
                // Rectangle(hdc, 100, 100, 800, 500);

                // Ellipse() : ���� �׸��� �Լ�
                // Ellipse Ÿ��
                // Ellipse(hdc, 100, 100, 800, 500);

                // �� �׸���
                // MoveToEx() : �������� �����ϴ� �Լ�.
                // LineTo() : ���������� ������ ��ǥ���� ���� �׸��� �Լ�.
                /*MoveToEx(hdc, 0, 0, NULL);
                LineTo(hdc, 500, 400);*/

                // �ٰ��� �׸���.
                // Polygon([��� ����], [POINT �迭], [�迭�� ����])
                /*POINT pointArr[] = { {250, 0}, {0,500}, {500,500} };
                Polygon(hdc, pointArr, 3);*/

                // �� �׸���
                POINT pointArr[] = { { 250, 0 },{400,450}, { 0,100 }, { 500,100 }, {100,450} };
                Polygon(hdc, pointArr, 5);

                EndPaint(hWnd, &ps);
            }
            break;
        case WM_DESTROY:
            {
                if (text != nullptr)
                {
                    delete[] text;
                    text = nullptr;
                }

                PostQuitMessage(0);
            }
            
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

WinApp::WinApp()
{
    // ù��°�� ������ �����ڰ� instance�� ��!
    if (!instance)
        instance = this;
}
