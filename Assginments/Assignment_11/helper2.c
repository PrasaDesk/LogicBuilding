#include"Header.h"
void SumArray(int *arr, int size)
{
	int icnt = 0,rem=0,isum=0;
	while (icnt < size)
	{
		rem = arr[icnt];
		isum = 0;
		while (rem > 0)
		{
			isum = isum + (rem%10);
			rem = rem / 10;
		}
		icnt++;
		printf("%d\t", isum);
		
		
	}
	
}