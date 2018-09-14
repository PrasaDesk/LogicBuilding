#include"header.h"

float AreaCircle(float fRadius)
{
	float fArea = 0.0f;
	if(fRadius < 0)
	{
		return ERR_NEG_RADIUS;
	}

	fArea = PI * fRadius * fRadius;
	
	return fArea;
}
