#include"header.h"

int main(int argc, char *argv[])
{
	int iValue;
	BOOL iRet;

	printf("Enter The NUMBER : ");
	scanf("%d",&iValue);

	iRet = check(iValue);

	if(iRet == TRUE)
	{
		printf("Divisible by 5.\n\n");
	}
	else
	{
		printf("Not Divisible by 5.\n\n");
	}
	return 0;
}
