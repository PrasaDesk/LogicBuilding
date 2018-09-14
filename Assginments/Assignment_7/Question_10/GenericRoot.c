#include<stdio.h>

int GenRoot(int iNo)
{
	int flag = 0;
	int iSum = 0;

	while(flag != 1)
	{
		flag = 0;
		while(iNo != 0)
		{
			flag++;
			iSum = iSum + (iNo % 10);
			iNo = iNo / 10;
		}
		iNo = iSum;
		iSum = 0;
	//	if(flag==1)
	//	{
	//		break;
	//	}
	}
	return iNo;
}

int main()
{
	int iNo = 0,iRet = 0;
	printf("Enter the NUmber : ");
	scanf("%d",&iNo);

	iRet = GenRoot(iNo);
	printf("Generic Root is : %d\n",iRet);
	
	return 0;
}
