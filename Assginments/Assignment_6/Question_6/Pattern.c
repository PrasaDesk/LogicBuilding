#include<stdio.h>

void Pattern(int iNo,char ch)
{
	int iCnt = 0;
	while(iNo != 0)
	{
		printf("%c ",ch);
		iNo--;
	}
	printf("\n");
}

int main()
{
	int iNo = 0;
	char chp = '\0';
	printf("Enter Number - ");
	scanf("%d ",&iNo);

	printf("Enter Character - ");
	scanf("%c ",&chp);
	
	Pattern(iNo,chp);
	
	return 0;
}
