#include"header.h"

void Pattern9(int iNo1,int iNo2)
{
	int  i = 0,j = 0;
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
		for(j = 1;j <= iNo2;j++)
		{
			if(j == i)
			{
				printf("$ ");
			}
			else if(j < i)
			{
				printf("# ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
