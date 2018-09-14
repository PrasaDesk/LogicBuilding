#include"header.h"

LONG Estimate(LONG iArea)
{
	LONG lCost = 0;
	if(iArea < 0)
	{
		return ERR_NEG_AREA;
	}
	
	lCost = PER_SQE_FEET * iArea;

	return lCost;
}
