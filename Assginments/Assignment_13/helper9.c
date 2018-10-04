#include"header.h"

void StrRevX(char *str)
{
	char *temp = str;
	char cTemp;
	if(NULL == str)
	{
		return;
	}

	while(*temp != '\0')
	{
		temp++;
	}
	temp--;

	while(str <= temp)
	{
		cTemp = *str;
		*str = *temp;
		*temp = cTemp;
		str++;
		temp--;
	}
}
