#include"Header.h"
void pattern(int *arr, int size)
{
	int i = 0 , j = 0 , icnt = 0;

	while (i < size)
	{
		if (arr[i] % 2 ==0)
		{
			for (j = 0;j < arr[i] ;j++)
			{
				printf("*");
			}
			
			printf("\n");
		}
		
		i++;
		
	}
	//printf("%d", icnt);
		printf("\n");

	}

