#include"stdio.h"

void StrReverseX(char *str)
{
	char temp;
	int i = 0,s = 0,e = 0,j = 0;
	if(NULL == str)
	{
		printf("INVALID INPUT\n");
		return;
	}

	//j = strlen(str) - 1;

	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			while((str[i] == ' ')&&(str[i] != '\0'))
			{
				i++;
			}
		}
		if(str[i] != ' ')
		{
			s = i;
			while((str[i] != ' ')&&(str[i] != '\0'))
			{
				i++;
			}
			e = i-1;
			while(s < e)
			{
				temp = str[s];
				str[s] = str[e];
				str[e] = temp;
				s++;
				e--;
			}
		}
	}	
}
