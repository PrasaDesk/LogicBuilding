#include"header.h"

int main()
{
	char str[50];
	printf("Enter the String - \n::: ");
	scanf("%[^'\n']s",str);
	
	printf("Pattern 1\n");
	Pattern1(str);	

	printf("\n\nPattern 2\n");
	Pattern2(str);
	
	printf("\n\nPattern 3\n");
        Pattern3(str);
	
	printf("\n\nPattern 4\n");
        Pattern4(str);

	printf("\n\nPattern 5\n");
        Pattern5(str);
	
	return 0;
}
