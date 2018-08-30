#include"header.h"

int main(int argc, char *argv[])
{
	int iRet = 0;
	int iNum1 = 0, iNum2 = 0;

	printf("Enter Number1 and Number2 : ");
	scanf("%d %d",&iNum1, &iNum2);

	iRet = Divide(iNum1,iNum2);
	printf("\nDivision is %d. \n",iRet);
	return 0;
}
