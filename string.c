#include<stdio.h>
int main()
{
	char str[10];
	printf("Enter the String : ");
	scanf("%[^'\n']s",str);

	printf("\nString is %s\n",str);

	return 0;
}
