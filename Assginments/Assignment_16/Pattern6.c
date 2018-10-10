#include"header.h"

void Pattern6(int iNo1,int iNo2)
{
        int i = 0,j = 0;
        if(iNo1 < 0)
        {
                iNo1 = -iNo1;
        }
        if(iNo2 < 0)
        {
                iNo2 = -iNo2;
        }

        for(i = 0;i < iNo1;i++)
        {
                for(j = 1;j <= iNo2-i; j++)
                {
                        printf("%d ",j);
                }
                printf("\n");
        }
        printf("\n");
}
