#include"Header.h"
void SwapX(char *ch, char *p)
{
	char *temp;
	if (((*ch >= 'A') && (*ch <= 'Z')) && ((*p >= 'A') && (*p <= 'Z')))
	{
		temp = ch;
		ch = p;
		p = temp;
	}
	if (((*ch >= 'a') && (*ch <= 'z')) && ((*p >= 'a') && (*p <= 'z')))
	{
		temp = ch;
		ch = p;
		p = temp;
	}
	printf("After swaping elements are %c %c", *ch, *p);

}