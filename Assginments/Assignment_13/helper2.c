#include"header.h"

void StrNCpyX(char *str,char *dest,int iCnt)
{
	if((NULL == str)&&(NULL == dest))
	{
		return;;
	}

	while((&str != '\0')&&(iCnt != 0))
	{
		*dest = *str;
		dest++;
		str++;
		iCnt--;
	}
}
