#include"header.h"

BOOL StrCmpX(char *str1,char *str2)
{
	if((NULL == str1)&&(NULL == str2))
	{
		return FALSE;
	}

	while((*str1 != '\0')&&(*str2 != '\0'))
	{
		if(*str1 != *str2)
		{
			break;
		}
		str1++;
		str2++;
	}
	if((*str1 == '\0')&&(*str2 == '\0'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
