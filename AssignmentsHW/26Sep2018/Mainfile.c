#include"header.h"

int main()
{
	int iRet = 0;
	char Arr[30]={'\0'};
	char ch;
	BOOL bRet = TRUE;
//	printf("Enter the Character : ");
//      scanf("%c",&ch);

	printf("Enter the String : ");
	//scanf("%s",Arr);
	scanf("%[^'\n']s",Arr);
/*
	iRet = CapitalChar(Arr);						// 1
	printf("Number of Captial Charaecters in String is %d \n",iRet);
	iRet = SmallChar(Arr);							// 2
	printf("Number of Small Charaecters in String is %d \n",iRet);
	iRet = CountSpace(Arr);							// 3	
        printf("Number of White Space in String is %d \n",iRet);	
	iRet = CountVowel(Arr);							// 4
	printf("Number of Vowels in String is %d \n",iRet);
	iRet = DiffFrequency(Arr);						// 5
        printf("Difference of frequency of Small And Capital Char in String is %d \n",iRet);

	iRet = FirstPos(Arr,ch);						// 6
	if(iRet == 0)
	{
		printf("Element Not Found\n");
	}
	else if(iRet == -1)
	{
		printf("Invalid Input");
	}
	else
	{
		printf("First position of Character in String is %d\n",iRet);
	}


	iRet = LastPos(Arr,ch);							// 7
        if(iRet == 0)
        {
                printf("Element Not Found\n");
        }
        else if(iRet == -1)
        {
                printf("Invalid Input");
        }
        else
        {
                printf("Last position of Character in String is %d\n",iRet);
        }

	DisplayReverse(Arr);							// 8


	ReverseInPlace(Arr);							// 10
	printf("Reverse String is = %s\n",Arr);	
*/
	bRet = Palindrom(Arr);							// 9
	if(bRet == TRUE)
	{
		printf("String is Palindorm\n");
	}
	else
	{
		printf("String is not Plaindrom\n");
	}

	return 0;
}
