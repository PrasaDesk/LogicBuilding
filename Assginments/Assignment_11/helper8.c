#include"Header.h"
int Search(char *arr, int size,char ch)
{
	int icnt = 0, count=0;
	char temp = ch;

	if ((ch >= 'A') && (ch <= 'Z'))
	{
		temp = ch + 32;
		
	}
	else if ((ch >= 'a') && (ch <= 'z'))
	{
		temp = ch - 32;
	}

	while (icnt < size)
	{
		
		 if ((arr[icnt] == ch) || (arr[icnt] == temp))
		{
			count++;
		}
		icnt++;
	}
	return count;
}