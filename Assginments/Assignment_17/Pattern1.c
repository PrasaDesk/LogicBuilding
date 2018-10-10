#include"header.h"

void Pattern1(char *str)
{
	int i = 0,j = 0,len = 0;
	//char *temp = str;
	
	if(NULL == str)
	{
		return;
	}
	
	len = strlen(str);	

	for(i = 1; i < len;i++)
	{
		for(j = 0; j < len;j++)
		{
			printf("%c ",str[j]);
		}
		printf("\n");
	}
/*
	while(*temp = '\0')
	{
		printf("%c",*temp);
		temp++;
	}
*/
}
