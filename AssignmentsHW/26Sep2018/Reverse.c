#include"header.h"

void ReverseInPlace(char *str)
{
        int i = 0;
        int bck = 0,fcnt = 0;
        char temp;
        if(str == NULL)
        {
                return;
        }

        while(str[i] != '\0')
        {
                i++;
        }
	fcnt = 0;
        bck = i-1;
        while(fcnt <= bck)
        {
                temp = str[fcnt];
                str[fcnt]=str[bck];
                str[bck]=temp;
                fcnt++;
                bck--;
        }       
}

