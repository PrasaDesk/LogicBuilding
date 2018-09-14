#include"header.h"

int main()
{
        int iValue = 0;
        float fret = 0.0f;
        printf("Enter the CM : ");
        scanf("%d",&iValue);

        fret = CeToMe(iValue);
        printf("%d CM = %.2f Meter\n",iValue,fret);

        return 0;
}

