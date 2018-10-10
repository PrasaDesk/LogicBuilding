#include"header.h"

void Pattern1(int iNo)
{
	int i = 0,Num = 0,digit;

	while(iNo != 0)
	{
		i++;
		digit = iNo % 10;
		Num = Num * 10 + digit;
		iNo = iNo / 10;
	}
	while(i != 0)
	{
		iNo = Num;
		while(iNo != 0)
		{
			printf("%d ",(iNo % 10));
			iNo = iNo / 10;
		}	
		printf("\n");
		i--;
	}
	printf("\n");
}
