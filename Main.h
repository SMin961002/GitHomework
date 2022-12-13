#pragma once
#include"LeftTop.h"
class Main
{
public:

	
	LeftTop* _LeftTop;

	Main() {}
	~Main() {}
public:
	void Init();
	void Update();
	void Render(HDC hdc);
	void Release();
	LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
};

