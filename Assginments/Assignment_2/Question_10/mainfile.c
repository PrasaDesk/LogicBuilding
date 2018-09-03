#include"header.h"

int main()
{
	BOOL iRet = 0;
	char cValue = '\0';

	printf("Enter Char to check vowel or Not : ");
	scanf("%c",&cValue);

	iRet = ChkVowel(cValue);

	if(iRet == TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	return 0;
}
