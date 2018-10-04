#include"header.h"

void StrCpySmall(char *str,char *dest)
{
        if((NULL == str)&&(NULL == dest))
        {
                return;
        }

        while(*str != '\0')
        {
                if((*str >= 'a')&&(*str <= 'z'))
                {
                        *dest = *str;
                        dest++;
                }
                str++;
        }
}
~                                
