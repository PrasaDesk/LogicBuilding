#include"header.h"

void StrNCatX(char *str,char *dest,int iCnt)
{
        if((NULL == str)&&(NULL == dest))
        {
                return;
        }

        while(*str != '\0')
        {
                str++;
        }

        *str = ' ';
        str++;

        while((*dest != '\0')&&(iCnt != 0))
        {
                *str = *dest;
                str++;
                dest++;
		iCnt--;
        }
        *str = '\0';
}

