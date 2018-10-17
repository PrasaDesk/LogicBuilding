#include"header.h"

void DisplayBinaryBit(UINT iNo)
{
	UINT mask = 0x8;
	UINT hex= 0;
	UINT ret = iNo | mask;
	printf("\n##  %u  ##\n ",ret);
	printf("enter Hex : ");
	scanf("%u",&hex);
	printf("%u \t %x\n",hex);





/*
	while(mask > 0)
	{
		if((iNo & mask) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		mask = mask >> 1;
	}
*/
}
