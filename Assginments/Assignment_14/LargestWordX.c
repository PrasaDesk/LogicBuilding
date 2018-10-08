#include"header.h"

void LargestWordX(const char *str)
{
	const char *temp = str;
	int i = 0,j = 0,s,e;
	int ocnt = 0,icnt= 0;
	if(NULL == str)
	{
		printf("INVALID IPNPUT\n");
		return;
	}	

	while(*temp != '\0')
	{
		
		if(*temp != ' ')
		{
			j = i;
			while((*temp != ' ')&&(*temp != '\0'))
			{	
				i++;
				ocnt++;
				temp++;
			}
			 if(icnt < ocnt)
	                {
                        	s = j;
                      		e = i; 
                        	icnt = ocnt;
				ocnt = 0;
        	        }			
		}
		
		if(*temp == ' ')
                {
                        while((*temp == ' ')&&(*temp != '\0'))
                        {
				i++;
                                temp++;
                        }
                }

		
	}
	printf("Largest word is : (s = %d  e = %d) \n::: ",s,e);
	for(i = s; i < e; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}
/*
int main()
{
	char str[30];
	printf("Enter the String - \n::: ");
	scanf("%[^'\n']s",str);

	LargestWord(str);
	
	return 0;
}
*/
