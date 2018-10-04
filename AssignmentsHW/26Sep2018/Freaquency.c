#include"header.h"

int DiffFrequency(char *str)
{
        int iSmallCnt = 0,iCapitalCnt = 0;

        if(str == NULL)
        {
                return -1;
        }

        while(*str != '\0')
        {
                if((*str >= 'a') && (*str <= 'z'))
                {
                        iSmallCnt++;
                }
		if((*str >= 'A') && (*str <= 'Z'))
                {
                        iCapitalCnt++;
                }

                str++;
        }
        return (iSmallCnt - iCapitalCnt);
}
