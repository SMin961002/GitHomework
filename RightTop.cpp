#include "stdafx.h"
#include "RightTop.h"

void RightTop::TextO(HDC hdc)
{
	for (int i = 0; i < 999; i+=30)
	{
		TextOut(hdc, WINSIZE_X / 2 +i, WINSIZE_Y / 2-i*0.6, "»ó¹Î", 4);
	}
}