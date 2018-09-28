#include"header.h"

BOOL ChkSmall(char ch)
{
        if((ch >= 'a')&&(ch <= 'z'))
        {
                return TRUE;
        }
        else if((ch >= 'A')&&(ch <= 'Z'))
        {
                return FALSE;
        }
        else
        {
                return INVALID_INPUT;
        }
}

