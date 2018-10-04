#include"Header.h"
void ChkSpecial(char ch)
{
	if (ch > 1)
	{
		return;
	}
	if ((ch == '@')|| (ch == '#') || (ch == '*') || (ch == '!') || (ch == '^') || (ch == '%') || (ch == '$') || (ch == '&'))
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}

}