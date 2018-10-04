#include"header.h"

void StrCpyX(char *str, char *dest)
{
	if((NULL == str)&&(NULL == dest))
	{
		return;
	}

	while(*str != '\0')
	{
		*dest = *str;
		str++;
		dest++;
	}

}
