#include"header.h"

int main()
{
	int iNo = 0;
	printf("Enter the Number : ");
	scanf("%d",&iNo);

	printf("Pattern 1\n");
	Pattern1(iNo);

	printf("\nPattern 2\n");
	Pattern2(iNo);

	printf("\nPattern 3\n");
        Pattern3(iNo);

	printf("\nPattern 4\n");
        Pattern4(iNo);
/*
	printf("\nPattern 5\n");
        Pattern5(iNo);
*/
	return 0;
}
