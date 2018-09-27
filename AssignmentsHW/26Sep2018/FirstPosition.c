#include"header.h"

int FirstPos(char *str,char ch)
{
	int iPos = 0,Flag = 0;
	
	if(str == NULL)
	{
		return -1;
	}
//	printf("char is = %c\n",ch);	
	while(*str != '\0')
	{
		iPos++;
		if(*str == ch)
		{
			Flag = 1;
			break;
		}
		str++;
	}
	if(Flag == 0)
	{
		return 0;
	}
	else
	{
		return iPos;
	}
}
