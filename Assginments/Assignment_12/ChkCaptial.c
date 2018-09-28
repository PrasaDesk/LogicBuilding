#include"header.h"

BOOL ChkCapital(char ch)
{
	if((ch >= 'A')&&(ch <= 'Z'))
	{
		return TRUE;
	}
	else if((ch >= 'a')&&(ch <= 'z'))
	{
		return FALSE;
	}
	else
	{
		return INVALID_INPUT;
	}
}
