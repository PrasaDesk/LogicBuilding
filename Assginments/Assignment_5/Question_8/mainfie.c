#include"header.h"

int main()
{
	LONG lRet = 0,lArea = 0;
	
	printf("Area In Square Feet : ");
	scanf("%ld",&lArea);

	lRet = Estimate(lArea);

	printf("Total cost for Area %ld Square Feet is Rs. %ld \n",lArea,lRet);
	return 0;
}
