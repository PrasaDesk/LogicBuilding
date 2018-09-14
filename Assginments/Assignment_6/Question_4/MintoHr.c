#include<stdio.h>
#define MINUTES 60
typedef unsigned int UINT;

void MinToHr(UINT iMin)
{
	UINT iHr = 0,iMinutes = 0;
	
	iHr = iMin / MINUTES;

	iMinutes = iMin % MINUTES;

	printf("%u Minutes = %u Hours %u Minutes\n",iMin,iHr,iMinutes);
}

int main()
{
	UINT iMin = 0;
	printf("Enter Minutes : ");
	scanf("%u",&iMin);

	MinToHr(iMin);

	return 0;
}
