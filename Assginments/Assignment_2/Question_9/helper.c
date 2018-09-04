#include"header.h"

void fibonacci(int iNo)
{
	int iNo1 = 1, iNo2 = 0, iNo3 =0;
	int i =0;
	for(i = 1;i <= iNo;i++)
	{
		iNo3 = iNo1 + iNo2;
		printf("%d ",iNo3);
		iNo1 = iNo2;
		iNo2 = iNo3;
	}
	printf("\n"); 
}
