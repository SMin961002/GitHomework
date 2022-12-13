#pragma once
#include"LeftTop.h"
#include "LeftBottom.h"
#include "RightTop.h"
#include "RightBottom.h"

class Main
{
public:
	LeftTop* leftTop;
	LeftBottom* leftBottom;
	RightTop* rightTop;
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

