#include"header.h"

void StrCpyX(const char *str,char *dest)
{
	if((NULL == str)||(NULL == dest))
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
		if(*str != ' ')
		{
			while((*str != ' ')&&(*str != '\0'))
			{
				*dest = *str;
				str++;
				dest++;
			}
		}
		*dest = '\0';
	}
	
}
