#include"header.h"

int LastPos(char *str,char ch)
{
        int index = 0,Flag = 0,iPos = 0;

        if(str == NULL)
        {
                return -1;
        }
//      printf("char is = %c\n",ch);    
        while(*str != '\0')
        {
                index++;
                if(*str == ch)
                {
                        Flag = 1;
			iPos = index;
                }
                str++;
        }
        if(Flag == 0)
        {
                return 0;
        }
        else
        {
                return iPos;
        }
}

