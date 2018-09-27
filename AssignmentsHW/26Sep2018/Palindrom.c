#include"header.h"

BOOL Palindrom(char *str)
{
        int i = 0;
        int bck = 0,fcnt = 0,flag = 1;
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
                if(str[fcnt] != str[bck])
		{
			flag = 0;
			break;
		}
                fcnt++;
                bck--;
        }
	if(flag == 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

