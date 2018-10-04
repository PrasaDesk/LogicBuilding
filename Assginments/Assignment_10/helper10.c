#include"Header.h"
BOOL ChkPalindrome(int *arr, int size1)
{
	int *temp = NULL;
	temp = arr;
	int i = 0 , rem=0, j=0;
	for (i = size1 - 1;i >= 0;)
	{

		rem = arr[i];
		//printf("Remainder is %d\n", rem);
		//printf("temp array elements are %d\n", temp[j]);
		if (rem != temp[j])
		{
			//printf("element not matched\n");
			break;
		}	
		else
		{
			i--;
			j++;
		}


	}
	if (j == size1)
	{
		return TRUE;
	}
	else
	{
		//printf("Sry\n");
		return FALSE;
	}
		
}
