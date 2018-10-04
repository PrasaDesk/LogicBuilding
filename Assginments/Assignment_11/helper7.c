#include"Header.h"
int ArrayCount(char *arr, int size)
{
	int icnt = 0;

	while (*arr>0)
	{
		if ((*arr >= 'A') && (*arr <= 'Z'))
		{

			icnt++;
		}
		
		arr++;
	}
	return icnt;
	
}