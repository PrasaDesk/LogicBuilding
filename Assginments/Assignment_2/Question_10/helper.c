#include"header.h"

BOOL ChkVowel(char ch)
{
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
