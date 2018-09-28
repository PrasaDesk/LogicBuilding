#include"header.h"

BOOL ChkAlphabate(char ch)
{
	if(((ch >= 'A')&&(ch <= 'Z')) || ((ch >= 'a')&&(ch <= 'z')))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
