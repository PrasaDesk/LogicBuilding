#include"Header.h"
void DisplaySchedule(char chDiv)
{
	int A = 7, B = 8.30, C = 9.20, D = 10.30;

	if ((chDiv>=65)&&(chDiv<=68))
	{
		if ((chDiv == 'A') || (chDiv == 'a'))
		{
			printf("Your exam time is at %d am\n", A);

		}
		if ((chDiv == 'B') || (chDiv == 'b'))
		{
			printf("Your exam time is at %d am\n", B);

		}
		if ((chDiv == 'C') || (chDiv == 'c'))
		{
			printf("Your exam time is at %d am\n", C);

		}
		if ((chDiv == 'D') || (chDiv == 'd'))
		{
			printf("Your exam time is at %d am\n", C);

		}


	}
	else
	{
		printf("Invalid Input\n");
	}
}