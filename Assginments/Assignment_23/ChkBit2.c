#include"header.h"

BOOL ChkBit2X(UINT iNo)
{
        //UINT mask1 = 72; //Position 4 and 7

	UINT mask1 = 8;    //Position 4
	UINT mask2 = 64;   //Position 7

//	printf("mask = %x\n",mask1);
        UINT ret = 0;

        ret = iNo | mask1 | mask2;


//      printf("ret = %x\n",ret);

        if(ret == iNo)
        {
                return TRUE;
        }
        else
        {
                return FALSE;
        }
}          
