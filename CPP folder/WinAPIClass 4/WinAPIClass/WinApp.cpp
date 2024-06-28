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
        case WM_CREATE:
            {
                rect = { 0,0,0,0 };
            }
        case WM_LBUTTONDOWN:
            {
                isDrag = true;
               // ���� ����, �� ���� ��� ���콺 ��ġ�� ����!
                int x = LOWORD(lParam);
                int y = HIWORD(lParam);

                rect.left = rect.right = x;
                rect.top = rect.bottom = y;

                InvalidateRect(hWnd, NULL, TRUE);
            }
            break;
        case WM_LBUTTONUP:
            {
                isDrag = false;
                int x = LOWORD(lParam);
                int y = HIWORD(lParam);

                rect.right = x;
                rect.bottom = y;

                InvalidateRect(hWnd, NULL, TRUE);
                
              
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
        case WM_MOUSEMOVE:
            {
                #pragma region ���콺 ��ġ
                                // ���콺 ��ġ ���!
                                // lParam : ���콺 ��ġ
                                // lParam(16����Ʈ ����)��
                                // 8����Ʈ�� ������ ���!
                                // LOWORD() : ���� �ڸ� �� 8����Ʈ. x
                                // HIWORD() : ���� �ڸ� �� 8����Ʈ. y
                                /*int x = LOWORD(lParam);
                                int y = HIWORD(lParam);
                                HDC hdc = GetDC(hWnd);

                                TCHAR text[50] = { 0 };*/

                                // ���(ȭ�� ���x)
                                // ���ڿ� ���� ������ '���� ���ڿ�'�� ���(ȭ�� ���x)�ϴ� �Լ�.
                                // ���ڿ� ���� ������ ������ �Ǽ� ��� ���ڿ��� �ƴ� �����͸� �ְ� ���� �� ���!
                                /*_stprintf_s(text, 50, _T("���콺�� ��ġ : %d, %d"), x, y);

                                TextOut(hdc, 0, 0, text, _tcslen(text));

                                ReleaseDC(hWnd, hdc);*/
                #pragma endregion 

                // ���콺�� �巡�� �ؼ�
                // �� �׸���!

                if (isDrag)
                {
                    int x = LOWORD(lParam);
                    int y = HIWORD(lParam);

                    rect.right = x;
                    rect.bottom = y;

                    InvalidateRect(hWnd, NULL, TRUE);
                }

                
            }
            break;
        case WM_PAINT:
            {
                PAINTSTRUCT ps;
                HDC hdc = BeginPaint(hWnd, &ps);
                
                Ellipse(hdc, rect.left, rect.top, rect.right, rect.bottom);



                EndPaint(hWnd, &ps);
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
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
