#pragma once
#include "Taewooo.h"
class Main
{
public:
	Taewooo* taew;
	Main() {}
	~Main() {}
public:
	void Init();
	void Update();
	void Render(HDC hdc);
	void Release();
	LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
};

