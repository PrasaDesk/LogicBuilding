#include"header.h"

UINT ToggleBitX(UINT iNo)
{
	UINT mask = 0x00000040;
	UINT ret = 0;
	ret = iNo ^ mask;
	return ret;
}
