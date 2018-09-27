#include"header.h"

void DisplayReverse(char *str)
{
	int i = 0;
	int bck;
	char temp;
	if(str == NULL)
	{
		return;
	}
	
	while(str[i] != '\0')
	{
		i++;
	}
	bck = i-1;
	while(bck != -1)
	{
		printf("%c",str[bck]);
		bck--;
	}	

/*
	while(fcnt <= bck)
	{
		temp = str[fcnt];
		str[fcnt]=str[bck];
		str[bck]=temp;
		printf("%c\t%c\n",str[fcnt],str[bck]);
		fcnt++;
		bck--;
	}	
*/	

}
