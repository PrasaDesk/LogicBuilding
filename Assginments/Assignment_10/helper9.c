#include"Header.h"
int* CopyArray(int *arr, int size1)
{

	int i = size1 - 1, j = 0;
	//int *arr;
	int *brr = (int *)malloc(sizeof(int)*size1);
	for (i = 0;i < size1;i++)
	{
		brr[i] = arr[i];
	}
	return brr;
}
