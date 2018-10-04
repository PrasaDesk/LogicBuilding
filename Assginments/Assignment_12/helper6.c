#include"Header.h"
void DisplayASCII()
{
	int i = 0;
	printf("Symbol     Decimal    HexaDecimal     Octal\t\n");
	while (i < 256)
	{
		printf("%d\t %c\t\t %x\t\t %o\t\t\n", i, i, i, i);
		i++;
	}
	
}