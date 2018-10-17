#include"header.h"

BOOL ChkBitX(UINT iNo)
{
	UINT mask= 0x8;    //Position 4
	UINT ret = 0;

	ret = iNo | mask;

//	printf("%u\n",ret);

	if(ret == iNo)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
