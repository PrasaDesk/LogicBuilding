#include"header.h"

void Pattern2(int iNo)
{
	int i = 0,Num = 0;;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	Num = iNo;
	while(Num != 0)
	{
		i++;
		Num = Num / 10;
	}

	while(i != 0)
	{
		Num = iNo;
		while(Num != 0)
		{
			printf("%d ", (Num % 10) );
			Num = Num / 10;
		}
		printf("\n");
		i--;
	}
	printf("\n");
}
