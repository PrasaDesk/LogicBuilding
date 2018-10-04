#include"Header.h"
void Display(int *arr, int size1, int *brr, int size2)
{
	int i = 0,j=0;
	while (i < size1||j<size2)
	{
		if (i < size1)
		{
			printf("%d\t", arr[i]);
			i++;
			if (i == size1)
			{
				printf("\n");
			}
		}
	
		
		else if(j<size2)
		{
			printf("%d\t", brr[j]);
			j++;
		}
		
	}
}
