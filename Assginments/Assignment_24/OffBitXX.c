#include"header.h"

UINT OffBitXX(UINT iNo)
{
        UINT mask= 0xFFFFFDBF; // 10th and 7th
        UINT ret = 0;
        ret = iNo & mask;
        return ret;
} 
