#include"Header.h"
BOOL ChkSmall(char ch)
{
	if ((ch >= 'a') && (ch <= 'z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}