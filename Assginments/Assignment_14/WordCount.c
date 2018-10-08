#include"header.h"

int WordCount(char *str)
{
	int iCnt = 0;
	if(NULL == str)
	{
		return -1;
	}
	while(*str != '\0')
	{
		if(*str == ' ')	
		{
			while((*str == ' ')&&(*str != '\0'))
			{
				str++;
			}
		}
		if(*str != ' ')
		{
			iCnt++;
			while((*str != ' ')&&(*str != '\0'))
			{
				str++;
			}
		}
	}
	return iCnt;
}
