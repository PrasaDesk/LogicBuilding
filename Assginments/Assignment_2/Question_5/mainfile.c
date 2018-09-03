#include"header.h"

int main()
{
	char ch1 = '\0' , ch2 = '\0';
	printf("Enter To Char : ");
	scanf("%c %c",&ch1,&ch2);
	
	Swap(&ch1,&ch2);
	 
	printf("%c %c",ch1,ch2);	

	return 0;
}
