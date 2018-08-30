#include"header.h"

int Divide(int iNo1,int iNo2)
{
	int iAns = 0;
	if(iNo2 > iNo1 )
	{
		return ERR_MISMATCH_INPUT;
	}
	if(iNo2 <= 0)
	{
		return ERR_ARITHMATIC_WRONG;
	}
	
	iAns = iNo1 / iNo2;
	return iAns;
}
