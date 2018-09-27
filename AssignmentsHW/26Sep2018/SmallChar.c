#include"header.h"

int SmallChar(char *str)
{
        int iCnt = 0;

        if(str == NULL)
        {
                return -1;
        }

        while(*str != '\0')
        {
                if((*str >= 'a') && (*str <= 'z'))
                {
                        iCnt++;
                }
                str++;
        }
        return iCnt;
}

