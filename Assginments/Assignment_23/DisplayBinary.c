#include"header.h"

void DisplayBinary(UINT iNo)
{
	while(iNo != 0)
	{
		printf("%d\t",(iNo % 2));
		iNo = iNo / 2;
	}
}
