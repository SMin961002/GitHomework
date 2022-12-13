#pragma once
#include "RightBottom.h"
#include "RightTop.h"

class Main
{
public:
	RightBottom* rightBottom;
	RightTop* rightTop;

	Main() {}
	~Main() {}
public:
	void Init();
	void Update();
	void Render(HDC hdc);
	void Release();
	LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
};

