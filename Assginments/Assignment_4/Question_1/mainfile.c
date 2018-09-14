#include"header.h"

int main(int argc,char *argv[])
{
	UINT iRet = 0;
	LONG lValue = 0;
	
	printf("Enter the Number : ");
	scanf("%ld",&lValue);

	iRet = MultDigit(lValue);

	printf("Multiplication of digit of number %ld is %u \n",lValue,iRet);

	return 0;
}
