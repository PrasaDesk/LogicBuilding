#include"Header.h"
void ReverseArray(int *arr, int size)
{
	int icnt = 0, rem = 0, isum = 0;
	while (icnt < size)
	{
		rem = arr[icnt];
		isum = 0;
		while (rem > 0)
		{
			 printf("%d",rem % 10);
			rem = rem / 10;
		}
		printf("\t");
		icnt++;
		


	}

}