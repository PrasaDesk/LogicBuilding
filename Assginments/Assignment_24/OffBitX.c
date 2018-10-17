#include"header.h"

UINT OffBitX(UINT iNo)
{
	UINT mask= 0xFFFFFFBF;
	UINT ret = 0;
	ret = iNo & mask;
	return ret;
}
