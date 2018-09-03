#include"header.h"

int main()
{
	int iNo1 = 0, iNo2 = 0;
	printf("Enter two Number : ");
	scanf("%d %d",&iNo1,&iNo2);

	Swap(&iNo1,&iNo2);

	printf("After Swap : %d %d\n",iNo1,iNo2);

	return 0;
}
