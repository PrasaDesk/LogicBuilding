#include"header.h"

char DisplayConvert(char cValue)
{
	if(cValue >= 'a' && cValue <= 'z')
	{
		//Lower to Upper
		cValue = cValue - 32;
	}
	else
	{
		//Upper to Lower
		cValue = cValue + 32;
	}
	return cValue;
}
