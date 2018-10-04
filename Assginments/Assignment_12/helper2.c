#include"Header.h"
BOOL Capital(char ch)
{
	if ((ch >= 'A') && (ch <= 'Z'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}