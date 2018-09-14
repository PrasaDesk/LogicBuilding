#include<stdio.h>

void Pattern(int iNo)
{
	while(iNo != 0)
	{
		printf("A ");
		iNo--;
	}
	printf("\n");
}

int main()
{
	int iNo = 0;
	printf("Enter the NUMBER : ");
	scanf("%d",&iNo);
		
	Pattern(iNo);
	
	return 0;
}
