#include"header.h"

void Pattern3(int iNo)
{
        int i = 1,Num = 0,t = 0;
        if(iNo < 0)
        {
                iNo = -iNo;
        }
	i = 1;
	Num = iNo;
        while(Num != 0)
        {
                t = i;
		Num = iNo;
		while((t != 0)&&(Num != 0))
		{
			printf("%d ", (Num % 10) );
			Num = Num / 10;
			t--;
		}	
		i++;
		printf("\n");
        }
        printf("\n");
}

