#include"header.h"

int CountVowel(char *str)
{
        int iCnt = 0;

        if(str == NULL)
        {
                return -1;
        }

        while(*str != '\0')
        {
                if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || 
		   (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
                {
                        iCnt++;
                }
                str++;
        }
        return iCnt;
}

