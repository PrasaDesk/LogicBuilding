#include"header.h"

void Pattern5(char *str)
{
	int i = 0, j = 0, len = 0;
	if(NULL == str)
	{
		return;
	}
	len= strlen(str);

	for(i = 0;i < len;i++)
	{
		for(j = 0;j < len;j++)
		{
			if(j <= i)
			{
				printf("%c ",str[j]);
			}
			else
			{
				printf("@ ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
