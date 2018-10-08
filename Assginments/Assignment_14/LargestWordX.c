#include<stdio.h>

void LargestWord(char *str)
{
	int i = 0,j = 0,s,e;
	int ocnt = 0,icnt= 0;
	if(NULL == str)
	{
		printf("INVALID IPNPUT\n");
		return;
	}	

	while(*str != '\0')
	{
		
		if(*str != ' ')
		{
			j = i;
			while((*str != ' ')&&(*str != '\0'))
			{	
				i++;
				ocnt++;
				str++;
			}
			 if(icnt < ocnt)
	                {
                        	s = j;
                      		e = i; 
                        	icnt = ocnt;
				ocnt = 0;
        	        }			
		}
		
		if(*str == ' ')
                {
                        while((*str == ' ')&&(*str != '\0'))
                        {
				i++;
                                str++;
                        }
                }

		
	}
	printf("Largest word is : (s = %d  e = %d) \n::: ",s,e);
	for(i = s; i < e; i++)
	{
		printf("%c  %c",str[i], '-');
	}
	printf("\n");
}

int main()
{
	char str[30];
	printf("Enter the String - \n::: ");
	scanf("%[^'\n']s",str);

	LargestWord(str);
	
	return 0;
}
