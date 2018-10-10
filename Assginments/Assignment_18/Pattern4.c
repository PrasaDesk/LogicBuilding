#include"header.h"

void Pattern4(int iNo)
{
        int i = 0,Num = 0,t = 0;
        if(iNo < 0)
        {
                iNo = -iNo;
        }
        Num = iNo;
        while(Num != 0)
        {
                i++;
                Num = Num / 10;
        }

        while(i != 0)
        {
                Num = iNo;
		t = i;
                while((t != 0)&&(Num != 0))
                {
                        printf("%d ", (Num % 10) );
                        Num = Num / 10;
			t--;
                }
                printf("\n");
                i--;
        }
        printf("\n");
}

