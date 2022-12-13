#include "stdafx.h"
#include "Taewooo.h"

void Taewooo::textO(HDC hdc)
{
	for (int i = WINSIZE_X / 2; i < WINSIZE_X; i+= 20)
	{
		TextOut(hdc,i,i*0.55,"еб©У",4);
	}
}
