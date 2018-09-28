#include"header.h"

int main()
{
	BOOL bRet = TRUE;
	char ch = '\0';

	printf("Enter the Character : ");
	scanf("%c",&ch);

	bRet = ChkAlphabate(ch);
	if(bRet == TRUE)
	{
		printf("Given Character is Aplhabate.\n");	
	}
	else
	{
		printf("Given Character is Not a Alphabate.\n");
	}

	//Check Small

        bRet = ChkCapital(ch);
        if(bRet == TRUE)
        {
                printf("Given Character is Capital Aplhabate.\n");
        }
        else if(bRet == FALSE)
        {
                printf("Given Character is Not a Capital Alphabate.\n");
        }
        else
        {
                printf("Invalid INPUT....!!!\n");
        }


	//Check Small

	bRet = ChkSmall(ch);
        if(bRet == TRUE)
        {
                printf("Given Character is Small Aplhabate.\n");
        }
        else if(bRet == FALSE)
        {
                printf("Given Character is Not a Small Alphabate.\n");
        }
	else
	{
		printf("Invalid INPUT....!!!\n");
	}

	//Check Digit

        bRet = ChkDigit(ch);
        if(bRet == TRUE)
        {
                printf("Given Character is Digit.\n");
        }
        else if(bRet == FALSE)
        {
                printf("Given Character is Not a Digit\n");
        }
       

	return 0;
}
