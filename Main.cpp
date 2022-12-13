#include "stdafx.h"
#include "Main.h"

void Main::Init()
{
    taew = new Taewooo;
}

void Main::Update()
{
}

void Main::Render(HDC hdc)
{
    taew->textO(hdc);
}

void Main::Release()
{
}

LRESULT Main::WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
    HDC hdc;
    PAINTSTRUCT ps;

    switch (iMessage)
    {
    case WM_PAINT:
        hdc = BeginPaint(hWnd, &ps);
        Render(hdc);
        EndPaint(hWnd, &ps);
        break;

    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_SPACE:

            break;
        case VK_ESCAPE:
            PostMessage(hWnd, WM_DESTROY, 0, 0);
            break;
        default:
            break;
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
	return DefWindowProc(hWnd, iMessage, wParam, lParam);
}
