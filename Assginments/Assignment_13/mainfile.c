#include"header.h"

int main()
{
	char str[30];
	char dest[30]={'\0'};
	int iNo = 0;
	BOOL bRet = TRUE;
	//StrCpyX(str,dest);
	
	printf("Enter the First String : ");
	scanf("%[^'\n']s",str);
	
        //printf("Enter the Second String : ");
        //scanf("  %[^'\n']s",dest);


	//printf("Enter the Number : ");
	//scanf(" %d",&iNo);

	//StrNCpyX(str,dest,iNo);

	//StrCpyCap(str,dest);

	//StrCpySmall(str,dest);
	
	//StrCatX(str,dest);

	//StrNCatX(str,dest,iNo);

	//StrRevX(str);
	
	//printf("%s \n",str);

	//bRet = StrCmpX(str,dest);
	
	//bRet = StrNCmpX(str,dest,iNo);
	
	bRet = StrPallindrome(str);

	if(bRet == TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	
	
	return 0;
}
