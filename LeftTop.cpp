#include"stdafx.h"
#include "LeftTop.h"

void LeftTop::TextO(HDC hdc)
{

	for (int i = 0; i < WINSIZE_X/2; i += 20)
	{
		TextOut(hdc, i, i * 0.55, "ÀÌ±Ý¹ü", 6);
	}

}
