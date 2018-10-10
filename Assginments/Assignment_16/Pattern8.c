#include"header.h"

void Pattern8(int iNo1,int iNo2)
{
	int i = 0,j = 0,x = 1;
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2 < 0)
	{
		iNo2 = -iNo2;
	}

	for(i = 1;i <= iNo1 ;i++)
	{
		for(j = 1;j <= iNo2; j++)
		{
			if(j <= i)
			{
				printf("%d ",x);
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
		x++;
	}
	printf("\n");
}
