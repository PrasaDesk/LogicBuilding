#include"header.h"

int main()
{
	int iValue1 = 0,iValue2 = 0;
	int iRet = 0;

	printf("Enter two NUMBER : ");
	scanf("%d %d",&iValue1,&iValue2);

	iRet = DisplayComFactorLarge(iValue1,iValue2);

	printf("\nlarge Factor is %d\n",iRet); 

	return 0;
}
