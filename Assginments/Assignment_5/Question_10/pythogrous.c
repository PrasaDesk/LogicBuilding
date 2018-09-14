#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkPythagorous(int iNo1,int iNo2,int iNo3)
{
	int LHS=0,RHS=0;
	LHS = (iNo1 * iNo1) + (iNo2 * iNo2);
	RHS = iNo3 * iNo3;
	if(LHS == RHS)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iNo1 = 0,iNo2 = 0,iNo3 = 0;
	BOOL bret = TRUE;
	printf("Enter Side 1 And 2 : ");
	scanf("%d %d",&iNo1,&iNo2);
	printf("Enter 3rd side : ");
	scanf("%d",&iNo3);

	bret=ChkPythagorous(iNo1,iNo2,iNo3);
	if(bret == TRUE)
	{
		printf("Yes, It is Pythagorian Triple.\n");
	}
	else
	{
		printf("No, It is Not a Pythagorian Triple.\n");
	}
	return 0;
}
