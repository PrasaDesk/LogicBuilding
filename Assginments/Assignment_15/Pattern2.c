#include"header.h"

void Pattern2(int iNo)
{
	int i = 0;
	char ch = 'A';
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(i = 0; i <= iNo;i++)
	{
		if(i % 2 == 0)
		{
			printf("%c ",ch++);
		
		}	
		else
		{
			printf("%c ",(ch + 32));
			ch++;
		}
	}
	printf("\n");
}
