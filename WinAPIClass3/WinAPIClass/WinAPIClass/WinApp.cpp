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
                index = 0;
                color = RGB(255, 0, 0);
                
            }
            break;
        case WM_LBUTTONDOWN:
            {
                index++;
                if (index >= 3)
                    index = 0;

                switch (index)
                {
                    case 0:
                        color = RGB(255, 0, 0);
                        break;
                    case 1:
                        color = RGB(255,255, 0);
                        break;
                    case 2:
                        color = RGB(0,255, 0);
                        break;
                }
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
                        // DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBO X), hWnd, About);
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
                        HDC hdc = BeginPaint(hWnd, &ps);
                #pragma region ���� ���� ����
                        //// TODO: ���⿡ hdc�� ����ϴ� �׸��� �ڵ带 �߰��մϴ�...

                        //// 1. ���ϴ� ���� ��, �귯�� ����
                        //// CreatePen() : ���� �����ϴ� �Լ�.
                        //// CreatePen([�� ��Ÿ��], [�� �β�], [����(RGB)])
                        //                
                        //// CreateSolidBrush() : �귯���� �����ϴ� �Լ�
                        //// CreateSolidBrush([����(RGB)])
                        //
                        //HPEN hPen = CreatePen(PS_SOLID, 2, RGB(255, 255, 0));

                        //HBRUSH hBrush = CreateSolidBrush(RGB(0, 255, 0));


                        //// 2. ������ ��, �귯�� ����...(Select).
                        //// SelectObject()
                        //// ��ȯ ������ : ������ ����ϴ� �׷��� ������Ʈ.
                        ////  : �׷��� ������Ʈ(��, �귯�� ��)�� �����ϴ� �Լ�.
                        //// (+ ������ ����ϴ� ��, �귯���� ����.)
                        //HPEN oldPen = (HPEN)SelectObject(hdc, hPen);
                        //HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
                        //
                        //// 3. ���� �׸���!
                        //Rectangle(hdc, 100, 100, 500, 200);
                        //
                        //// 4. ������ ����ϴ� ��, �귯�� ����.
                        //SelectObject(hdc, oldPen);
                        //SelectObject(hdc, oldBrush);
                        //
                        //// 5. �����ߴ� ��, �귯�� ����
                        //// DeleteObject([�׷��� ������Ʈ])
                        //// : �׷��� ������Ʈ�� �����ϴ� �Լ�.
                        //DeleteObject(hPen);
                        //DeleteObject(hBrush);
        #pragma endregion

                // ���콺 ���� ��ư�� Ŭ���ϸ� 
                // ������ - ����� - �ʷϻ����� ������
                // ������ ����Ǵ� �� �׸���.
                // (ó�� ������ ���������� ����!)


                
                HBRUSH hBrush = CreateSolidBrush(color);
                HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, hBrush);
               
                Ellipse(hdc, 200, 200, 600, 600);

                SelectObject(hdc, oldBrush);

                DeleteObject(hBrush);


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
