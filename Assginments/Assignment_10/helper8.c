#include"Header.h"
int* CopyArrayRev(int *arr, int size1)
{

	int i = 0,j=0;
	int *temp = (int *)malloc(sizeof(int)*size1);
	for (i = size1-1;i >= 0;i--)
	{
		temp[j] = arr[i];
		j++;
	}
	return temp;
}
