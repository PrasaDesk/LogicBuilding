#include"header.h"

int main()
{
        UINT iValue = 0;
        UINT iRet = 0;
        BOOL bRet = FALSE;
        printf("Enter the NUMBER : ");
        scanf("%u",&iValue);

//	iRet = OffBitXX(iValue);

//	iRet = OffBitXX(iValue);

//	iRet = ToggleBitX(iValue);


//	iRet = ToggleBitXX(iValue);	

	iRet = OnFourBitX(iValue);

	printf("\nModified No is : %d\n",iRet);

	return 0;
}
