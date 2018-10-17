#include"header.h"

UINT OnFourBitX(UINT iNo)
{
        UINT mask= 0x0000000F; // 10th and 7th
        UINT ret = 0;
        ret = iNo | mask;
        return ret;
}

