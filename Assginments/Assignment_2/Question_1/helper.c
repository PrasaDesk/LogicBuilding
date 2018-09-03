#include"header.h"

void printEven(int iNo)
{
	int iCnt = 0;
	int iEven = 0;
	if(iNo <= 0)
	{
		return;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iEven = 2 * iCnt;
		printf("%d ",iEven);
	}
}
