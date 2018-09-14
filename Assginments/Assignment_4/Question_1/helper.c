#include"header.h"

UINT MultDigit(LONG lNo)
{
	UINT iMult = 1;
	LONG lDigit = 0;

	while(lNo != 0)
	{
		lDigit = lNo % 10;
		if(lDigit == 0)
		{
			lNo = lNo / 10;
			continue;
		}
		iMult = iMult * lDigit;
		lNo = lNo / 10;
	}
	return iMult;
}
