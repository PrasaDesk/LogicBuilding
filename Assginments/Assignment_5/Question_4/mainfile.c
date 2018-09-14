#include"header.h"

int main()
{
	float fRet = 0.0f;
	float side = 0.0f;

	printf("Enter Side in Centimeters : ");
	scanf("%f",&side);

	fRet = AreaSquare(side);
	
	printf("Area of Square with side %.2f CM is %.4f\n",side,fRet);

	return 0;
}
