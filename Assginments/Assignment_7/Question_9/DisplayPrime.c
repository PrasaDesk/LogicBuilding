#include<stdio.h>

void DisplayPrime(int iStart,int iEnd)
{
	int iCnt = 0,infor = 0;

	for(iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		for(infor = 2;infor <= (iCnt/2);infor++)
		{
			if((iCnt % infor) == 0)
			{
				infor = 1;
				break;
			}
		}
		if(infor != 1)
		{
			printf("%d ",iCnt);
		}
	}
}

int main()
{
	int iNo1 = 0,iNo2 = 0;
	printf("Enter Range : ");
	scanf("%d %d",&iNo1,&iNo2);
	printf("Prime Numbers between %d to %d\n",iNo1,iNo2);
	DisplayPrime(iNo1,iNo2);
	printf("\n");	
	return 0;
}
