#include"header.h"

void Pattern1(int iNo)
{
	int i = 0;
	char ch = 'A';
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(i = 0;i <= iNo;i++)
	{
		printf("%c ",ch++);
	}
	printf("\n");
}
