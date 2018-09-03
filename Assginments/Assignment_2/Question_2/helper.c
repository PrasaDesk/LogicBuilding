#include"header.h"

void DisplayEvenFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(i=2 ;i <= iNo/2; i=i+2)
	{
		if((iNo % i)==0)
		{
			printf("%d ",i);
		}
	}
}
