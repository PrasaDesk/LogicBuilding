#include"header.h"

void Pattern(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("* ");
	}

	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("# ");
	}
}
