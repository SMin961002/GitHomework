#pragma once
#include "RightBottom.h"
class Main
{
public:
	RightBottom* rightBottom;
	Main() {}
	~Main() {}
public:
	void Init();
	void Update();
	void Render(HDC hdc);
	void Release();
	LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
};

