#include"header.h"

BOOL StrNCmpX(char *str1,char *str2,int iNo)
{
	int f = 1;
        if((NULL == str1)&&(NULL == str2))
        {
                return FALSE;
        }

        while((*str1 != '\0')&&(*str2 != '\0')&&(iNo != 0))
        {
                if(*str1 != *str2)
                {
                      f = 0;  
		      break;
                }
                str1++;
                str2++;
		iNo--;
        }

	if(iNo >= 1)
	{
		return FALSE;
	}
	
        if(f==1)
        {
                return TRUE;
        }
        else
        {
                return FALSE;
        }
}

