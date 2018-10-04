#include"Header.h"
int main()
{
	// program 1
	char ch = '\0';
	BOOL ret = FALSE;
	printf("Enter character:\n");
	scanf("%c", &ch);
	ret = Alphabet(ch);
	if (ret == FALSE)
	{
	printf("FALSE");
	}
	else
	{
	printf("TRUE");
	}
	return 0;
	


	/* program 2
	char ch = '\0';
	BOOL ret = FALSE;
	printf("Enter character:\n");
	scanf("%c", &ch);
	ret = Capital(ch);
	if (ret == FALSE)
	{
	printf("\nFALSE\n");
	}
	else
	{
	printf("\nTRUE\n");
	}
	return 0;
	*/

	/* program 3
	char ch = '\0';
	BOOL ret = FALSE;
	printf("Enter character:\n");
	scanf("%c", &ch);
	ret = ChkDigit(ch);
	if (ret == FALSE)
	{
	printf("\nFALSE\n");
	}
	else
	{
	printf("\nTRUE\n");
	}
	return 0;
	*/


	/* program 4

	char ch = '\0';
	BOOL ret = FALSE;
	printf("Enter character:\n");
	scanf("%c", &ch);
	ret = ChkSmall(ch);
	if (ret == FALSE)
	{
	printf("\nFALSE\n");
	}
	else
	{
	printf("\nTRUE\n");
	}
	return 0;
	*/


	/* program 5
	char ch = '\0';
	BOOL ret = FALSE;
	printf("Enter character:\n");
	scanf("%c", &ch);
	DisplaySchedule(ch);
	return 0;
	*/


	/* program 6
	DisplayASCII();
	return 0;
	*/



	/* program 7
	char ch = '\0';
	char p = '\0';
	printf("Enter first character:\n");
	scanf("%c",&ch);
	printf("Enter second character:\n");
	scanf(" %c",&p);
	SwapX(&ch, &p);
	return 0;
	*/




	/* program 8
	char ch = '\0';
	printf("Enter character:\n");
	scanf("%c", &ch);
	Display(ch);
	return 0;
	*/



	/*program 9
	char ch = '\0';
	printf("Enter character:\n");
	scanf("%c", &ch);
	ChkSpecial(ch);
	return 0;
	*/


	/* program 10
	char ch = '\0';
	printf("Enter character:\n");
	scanf("%c", &ch);
	DisplayX(ch);
	return 0;
	*/
}

