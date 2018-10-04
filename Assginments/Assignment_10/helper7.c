#include"Header.h"
int MinArray(int *arr, int size1, int *brr, int size2)
{
	int i = 0, j = 0, imin1 = arr[i], imin2 = brr[j];

	for (i = 0;i < size1;i++)
	{
		if (imin1 > arr[i])
		{
			imin1 = arr[i];
		}
	}
	printf("Minimum of first array is:%d\n", imin1);

	for (j = 0;j < size2;j++)
	{
		if (imin2 > brr[j])
		{
			imin2 = brr[j];
		}
	}
	printf("Minimum of second array is:%d\n", imin2);
	return 0;
}
