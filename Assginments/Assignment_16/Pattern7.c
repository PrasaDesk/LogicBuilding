#include"header.h"

void Pattern7(int iNo1,int iNo2)
{
	int i = 0,j = 0;
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}

	for(i = 1;i <= iNo1;i++)
	{
		for(j = iNo1-i;j < iNo2;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n");
}
