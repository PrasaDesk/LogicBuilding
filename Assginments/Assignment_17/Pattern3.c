#include"stdio.h"

void Pattern3(char *str)
{
	int i = 0,j = 0;
	if(NULL == str)
	{
		return;
	}

	for(i = 0; i < strlen(str);i++)
	{
		for(j = 0; j <= i;j++)
		{
			printf("%c ",str[j]);
		}
		printf("\n");
	}
	printf("\n");
}
