#include"header.h"

void Pattern2(int iNo1,int iNo2)
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

        for(i = 1;i <= iNo2;i++)
        {
                printf("%d ",i);
        }
        printf("\n");

        for(i = 1;i <= iNo1-2;i++)
        {
                for(j = 1;j <= iNo2; j++)
                {
                        if(j == 1 || j == iNo2)
                        {
                                printf("%d ",j);
                        }
                        else
                        {
                                printf("* ");
                        }
                }
                printf("\n");
        }
        for(i = 1;i <= iNo2;i++)
        {
                printf("%d ",i);
        }

        printf("\n");
}

