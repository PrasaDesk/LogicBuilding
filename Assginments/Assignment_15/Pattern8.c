#include"header.h"

void Pattern8(int iNo1,int iNo2)
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
	//Using 2 Inputs
        for(i = 1;i <= iNo1;i++)
        {
                for(j = 1;j <= iNo2;j++)
                {
                        printf("* ");
                }
                printf("\n");
		iNo2--;
        }
        printf("\n");
	
	/*//Using one Inputs
	for(i = iNo1;i >= 1;i--)
        {
                for(j = 1;j <= i;j++)
                {
                        printf("* ");
                }
                printf("\n");
        }
        printf("\n");
	*/	
}                                     
