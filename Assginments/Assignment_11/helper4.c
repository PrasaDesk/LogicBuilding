#include"Header.h"
int ArrayCapital(char *arr, int size)
{
	int icnt = 0, rem = 0, temp = 0;
	
	while (icnt < size)
	{
		if ((arr[icnt] >= 'A') && (arr[icnt] <= 'Z'))
		{
			temp++;
		}
		icnt++;
	}
	//printf("%d", temp);
	return temp;

}