#include"header.h"

int CountSpace(char *str)
{
	int iCnt = 0;
	
	if(str == NULL)
	{
		return -1;
	}

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
} 
