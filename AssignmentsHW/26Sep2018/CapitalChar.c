//Count Captial Charecter in String

#include"header.h"

int CapitalChar(char *str)
{
	int iCnt = 0;

	if(str == NULL)
	{
		return -1;
	}

	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
