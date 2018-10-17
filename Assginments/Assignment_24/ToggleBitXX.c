#include"header.h"

UINT ToggleBitXX(UINT iNo)
{
        UINT mask= 0x00000240; // 10th and 7th
        UINT ret = 0;
        ret = iNo ^ mask;
        return ret;
}

