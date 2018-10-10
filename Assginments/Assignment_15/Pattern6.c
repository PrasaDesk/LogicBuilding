#include"stdio.h"

void Pattern6(int iNo1,int iNo2)
{
	int i = 0,j = 0,temp = 0;
	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2 < 0)
        {
                iNo2 = -iNo2;
        }
	
	for(i =1;i <= iNo1;i++)
	{
		temp = 1;
		for(j = 1;j <= iNo2;j++)
		{
			if((j % 2) == 0)
			{
				printf("$ ");
				continue;
			}
			printf("%d ",temp++);
		}
		printf("\n");
	}
	printf("\n");
}
