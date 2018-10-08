#include"stdio.h"

void StrReverseX(char *str)
{
	char temp;
	int i = 0,j = 0;
	if(NULL == str)
	{
		printf("INVALID INPUT\n");
		return;
	}

	j = strlen(str) - 1;

	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}	
}
