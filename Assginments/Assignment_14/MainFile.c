#include"header.h"

int main()
{
	char str[50];
	char dest[50];
	int iRet = 0;
	printf("Enter the String - \n::: ");
	scanf(" %[^'\n']c",str);

	//Question 1
	iRet = WordCount(str);
	if(iRet == -1)
	{
		printf("Invalid Input\n");
	}
	else
	{
		printf("Number of Words in String is : %d\n",iRet);
	}

	//Question 2
	iRet = WordLength(str);
	printf("\nLargest Word Length in the String is : %d\n",iRet);

	//Question 3
	//StrReverseX(str);
	//printf("After Reverse a string : \n::: %s\n",str);

	//Question 4
	StrCpyX(str, dest);
	printf("After Removing White Space from string- \n::: %s\n",dest);

	//Question 5
	StrCapX(str);
	printf("After Performing StrCapX -\n::: %s\n",str);

	return 0;
}
