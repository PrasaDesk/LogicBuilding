#include"header.h"

float Circum(float fRadius)
{
	float fCircum = 0.0f;
	if(fRadius < 0)
	{
		return ERR_NEG_RADIUS;
	}

	fCircum = 2 * PI * fRadius;
	
	return fCircum;
}
