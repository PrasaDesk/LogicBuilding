#include"header.h"

int main()
{
	float fRad = 0.0f;
	float fRet = 0.0f;
	printf("Eeter Radius in CM : ");
	scanf("%f",&fRad);

	fRet = AreaCircle(fRad);

	printf("Area of Circle with Radius %.2f CM is %.4f CM/Sq\n",fRad,fRet);

	return 0;
}
