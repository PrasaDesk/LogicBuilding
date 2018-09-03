#include"header.h"

void DisplayComFactor(int iNo1,int iNo2)
{
	int i = 1;
	while((i<=iNo1) && (i<=iNo2))
	{
		if(((iNo1%i)==0) && ((iNo2%i)==0))
		{
			printf("%d ",i);
		}
		i++;
	}	

}
