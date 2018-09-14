#include<stdio.h>

float AreaRect(float fLen,float fWid)
{
	float Area =0.0;
	Area = fLen * fWid;
	return Area;
}

int main()
{
	float len,wid,fret;
	printf("Enter Len and Wid : ");
	scanf("%f %f",&len,&wid);
	fret=AreaRect(len,wid);
	printf("Area of Rectangle is %.2f\n",fret);
	return 0;
}
