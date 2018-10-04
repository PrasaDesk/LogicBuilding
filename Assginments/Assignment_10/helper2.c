#include"Header.h"
void DisplayEven(int *arr, int size1, int *brr, int size2)
{
	int i = 0, j = 0;
	for (i = 0;i <= size1;i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d", arr[i]);
		}
		
	}
	for (j = 0;j <= size2;j++)
	{
		if (brr[j] % 2 == 0)
		{
			printf("%d", brr[j]);
		}
		
	}
	
}
