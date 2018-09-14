#include"header.h"

float AreaSquare(float fSide)
{
	float fArea = 0.0f;
	if(fSide < 0)
	{
		return ERR_NEG_SIDE;
	}
	
	fArea = fSide * fSide;
	return fArea;
}
