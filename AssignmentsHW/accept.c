#include<stdio.h>

int main()
{
        char arr[30];
        char ch;
        printf("Enter string : ");
        scanf("%[^'\n']s",arr);

	printf("Enter the character : ");
        scanf(" %c",&ch);


        printf("\n%s\n",arr);
	printf("\n%c\n",ch);
        return 0;
}

