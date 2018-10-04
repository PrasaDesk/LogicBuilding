#include"Header.h"
void Percentage(float *arr, int size)
{
	int icnt = 0;
	float rem = 0.0;
	//int rem = 0;
	while (icnt < size)
	{
		rem = arr[icnt];
		//printf("Remender is %.2f", rem);

		//ch = rem;
	
		if (rem < 35)
		{
			printf("%.2f\t: Fail--\n",rem);
			//continue;
		}

		if ((rem >35)&&(rem<=50))
		{
			printf("%.2f\t: Pass Class--\n",rem);
		}
		if ((rem >50) && (rem <= 60))
		{
			printf("%.2f\t: Second Class--\n",rem);
		}
		if ((rem > 60) && (rem <= 70))
		{
			printf("%.2f\t: First Class--\n",rem);
		}
		if (rem > 70)
		{
			printf("%.2f\t: First class with distinction--\n",rem);
		}
			   
		
		icnt++;
	}
}