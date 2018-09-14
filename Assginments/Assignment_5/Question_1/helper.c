#include"header.h"

UINT MinDigit(LONG iNo)
{
	UINT iMin = 10,iDigit = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iMin > iDigit)
		{
			iMin = iDigit;
		}
		if(iMin == 0)
		{
			break;
		}
		iNo = iNo / 10;
	}
	return iMin;
}
