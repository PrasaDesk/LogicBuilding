#include"header.h"

int DisplayComFactorLarge(int iNo1,int iNo2)
{
	int i = 1;
	int Max = 0;

	while((i<=iNo1) && (i<=iNo2))
	{
		if((iNo1%i==0) && (iNo2%i==0))
		{
			if(Max<i)
			{
				Max = i;
			}
		}
	}	
	return Max;
}
