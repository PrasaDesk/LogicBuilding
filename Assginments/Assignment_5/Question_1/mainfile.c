#include"header.h"

int main(int args,char *argv[])
{
	UINT iRet = 0;
	LONG iValue = 0;
	printf("Enter the Number : ");
	scanf("%ld",&iValue);

	iRet = MinDigit(iValue);

	printf("Smallest digit is %u\n",iRet);	

	return 0;
}
