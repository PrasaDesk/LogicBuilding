#include"header.h"

int main()
{
	float fRad = 0.0f;
	float fRet = 0.0f;
	printf("Eeter Radius in CM : ");
	scanf("%f",&fRad);

	fRet = Circum(fRad);

	printf("Circumference of Circle with Radius %.2f CM is %.2f CM\n",fRad,fRet);

	return 0;
}
