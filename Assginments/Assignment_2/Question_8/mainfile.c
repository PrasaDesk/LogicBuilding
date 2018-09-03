#include"header.h"

int main()
{
	char ch = '\0', cRet = '\0';
	printf("Enter Character : ");
	scanf("%c",&ch);
	
	cRet = DisplayConvert(ch);

	printf("converted Char %c\n",cRet);	

	return 0;
}
