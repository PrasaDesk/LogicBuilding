#include"header.h"

BOOL StrPallindrome(char *str)
{
        char *temp = str;
        char cTemp;
	int f = 1;
        if(NULL == str)
        {
                return FALSE;
        }

        while(*temp != '\0')
        {
                temp++;
        }
        temp--;

        while(str <= temp)
        {
                if(*str == *temp)
		{
			str++;
	                temp--;
		}
		else if((*str >= 'A')&&(*str <= 'Z')&&(*temp >= 'a')&&(*temp <= 'z'))
		{
			cTemp = *temp;
			if(*str == (cTemp - 32))
			{
				str++;
        	        	temp--;
			}
		}
		else if((*str >= 'a')&&(*str <= 'z')&&(*temp >= 'A')&&(*temp <= 'Z'))
                {
                        cTemp = *temp;
                        if(*temp == (cTemp + 32))
                        {
				str++;
		                temp--;
                        }
                }
		else
		{
			f = 0;
			break;
		}
        }
	if(f == 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

