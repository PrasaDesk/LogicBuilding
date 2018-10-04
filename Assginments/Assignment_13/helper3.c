#include"header.h"

void StrCpyCap(char *str,char *dest)
{
	if((NULL == str)&&(NULL == dest))
	{
		return;
	}

	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*dest = *str;
			dest++;
		}
		str++;
	}
}
