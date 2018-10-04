#include"Header.h"
int Difference(char *arr, int size)
{
	int icnt = 0, count = 0;
	int temp = 0 , temp1=0;

	if ((arr == NULL) || (size < 0))
	{
		return -1;
	}
	

	while (icnt<size)
	{
		if ((arr[icnt] >= 'A') && (arr[icnt] <= 'Z'))
		{
			temp++;
		}

		if ((arr[icnt] >= 'a') && (arr[icnt] <= 'z'))
		{
			temp1++;

		}
		icnt++;
		
	}
	return (temp-temp1);
}