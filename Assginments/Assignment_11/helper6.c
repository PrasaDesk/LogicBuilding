#include"Header.h"
void ArrayReplace(char *arr, int size)
{
	int icnt = 0;
	
	while (*arr>0)
	{
		if ((*arr >= 'A') && (*arr <= 'Z'))
		{
			
			printf("%c\t", *arr + 32);
		}
		else if((*arr >= 'a') && (*arr <= 'z'))
		{
			printf("%c\t", *arr);
		}
		else
		{
			printf("Please enter valid input\n");
		}
		
		arr++;

	}
	//printf("%c", *arr);
}