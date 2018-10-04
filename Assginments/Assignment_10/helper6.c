#include"Header.h"
int DiffArray(int *arr, int size1, int *brr, int size2)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;
	int size3 = size1 + size2;
	for (i = 0;i < size1;i++)
	{
		sum1 += arr[i];
	}

	for (i = 0;i < size2;i++)
	{
		sum2 += brr[i];
	}
	return(sum1 - sum2);

}
