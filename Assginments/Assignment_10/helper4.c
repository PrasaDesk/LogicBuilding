#include"Header.h"
void ArrayConcate(int *arr, int size1, int *brr, int size2)
{
	int i = 0,j=0;
	int size3 = size1 + size2;
	int *temp;
	temp = (int *)malloc(sizeof(int)*size3);
	for (i = 0;i < size1;i++)
	{

		temp[i] = arr[i];
	}
	int *temp1;
	temp1 = (int *)malloc(sizeof(int)*size3);
	for (i = 0;i < size2;i++)
	{
		temp1[i] = brr[i];
	}
	for (i = 0;i<size1;i++)
	{
		printf("%d", temp[i]);
		
	}
	for (j = 0;j < size2;j++)
	{
		printf("%d", temp1[j]);
	}
}
