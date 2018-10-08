#include"header.h"

void StrCapX(char *str)
{
	if(NULL == str)
	{
		printf("INVALID INPUT\n");
		return;
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
		if((*str >= 'a')&&(*str <= 'z'))
		{
			*str = *str -32;
		}
		if(*str != ' ')
		{
			while((*str != ' ')&&(*str != '\0'))
                        {
                                str++;
                        }
		}
	}
}
