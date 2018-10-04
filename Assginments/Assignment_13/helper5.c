#include"header.h"

void StrCatX(char *str,char *dest)
{
	if((NULL == str)&&(NULL == dest))
	{
		return;
	}

	while(*str != '\0')
	{
		str++;
	}

	*str = ' ';
	str++;
	
	while(*dest != '\0')
	{
		*str = *dest;
		str++;
		dest++;
	}
	*str = '\0';
}
