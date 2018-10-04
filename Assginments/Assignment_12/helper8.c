#include"Header.h"
void Display(char ch)
{
	if ((ch >= 'a') && (ch <= 'z'))
	{
		while (ch <= 'z') 
		{
			printf("%c", ch);
			ch++;
		}
	}
	else if ((ch >= 'A') && (ch <= 'Z'))
	{
		while(ch<='Z')
		{
			printf("%c", ch);
			ch++;
		}
	}
	else
	{
		return;
	}
	
	
	
}