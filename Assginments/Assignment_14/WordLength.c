#include"header.h"

int WordLength(char *str)
{
	int OldCnt = 0,iCnt = 0;
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
			while((*str != ' ')&&(*str != '\0'))
			{				
				OldCnt++;
				str++;
			}

			if(iCnt < OldCnt){
				iCnt = OldCnt;
				OldCnt = 0;
			}
		}
	}
	return iCnt;
}
