#include"header.h"

int main()
{
	UINT iValue = 0;
	int iRet = 0;
	BOOL bRet = FALSE;
	printf("Enter the NUMBER : ");
	scanf("%u",&iValue);

	DisplayBinary(iValue);

	bRet = ChkBitX(iValue);
	if(bRet == TRUE)
	{
		printf("\nTRUE : 4th Bit is ON\n");
	}
	else
	{
		printf("\nFALSE : 4th Bit is OFF\n");
	}

	bRet = ChkBit2X(iValue);
        if(bRet == TRUE)
        {
                printf("\nTRUE : 4th And 7th Bit is ON\n");
        }
        else
        {
                printf("\nFALSE : 4th And 7th Bit is OFF\n");
        }

	iRet = CountOnBit(iValue);
	printf("\nThere is %d bits On in Given NUmber %u\n",iRet,iValue);

	DisplayBinaryBit(iValue);

	printf("\n");
	return 0;
}
