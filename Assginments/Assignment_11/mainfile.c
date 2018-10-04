#include"Header.h"
int main()
{
	/* program 1
	int i = 0,size=0;
	int *arr = NULL;
	printf("Enter the size of array:\n");
	scanf("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter Elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	ReverseArray(arr, size);
	return 0;
	*/


	/* program 2
	int i = 0, size = 0;
	int *arr = NULL;
	printf("Enter the size of array:\n");
	scanf("%d", &size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter Elements in the array:\n");
	for (i = 0;i < size;i++)
	{
		scanf("%d", &arr[i]);
	}
	SumArray(arr, size);
	return 0;
	*/


	/* program 4
	int size = 0, i=0,result=0;
	char *arr = '\0';
	printf("Enter number of elements:\n");
	scanf("%d", &size);
	arr = (char *)malloc(sizeof(char)*size);
	printf("Enter the elements in the array:\n");
	for (i = 0;i <size;i++)
	{
		scanf(" %c", &arr[i]);
	}
	result = ArrayCapital(arr,size);
	printf("Number of Capital Letters are : %d", result);
	return 0;
	*/


	/* program 5

	int size = 0, i = 0, result = 0;
	float *arr = NULL;
	printf("Enter Size of Array:\n");
	scanf("%d", &size);
	arr = (float *)malloc(sizeof(float)*size);
	printf("Enter the Percentage :\n");
	for (i = 0;i <size;i++)
	{
		scanf("%f", &arr[i]);
	}
	 Percentage(arr, size);
	 return 0;
	 */




	/* program 6
	int size = 0, i = 0, result = 0;
	char *arr = '\0';
	printf("Enter Size of Array:\n");
	scanf("%d", &size);
	arr = (char *)malloc(sizeof(char)*size);
	printf("Enter the Characters :\n");
	for (i = 0;i <size;i++)
	{
		scanf(" %c", &arr[i]);
	}
	ArrayReplace(arr, size);
	return 0;
	*/



	/* program 7
	int size = 0, i = 0, result = 0;
	char *arr = '\0';
	printf("Enter Size of Array:\n");
	scanf("%d", &size);
	arr = (char *)malloc(sizeof(char)*size);
	printf("Enter the Characters :\n");
	for (i = 0;i <size;i++)
	{
		scanf(" %c", &arr[i]);
	}
	result=ArrayCount(arr, size);
	printf("%d\t", result);
	return 0;
	*/




	 //program 8
	int size = 0, i = 0, result = 0;
	char *arr = '\0',ch='\0';
	printf("Enter Size of Array:\n");
	scanf("%d", &size);
	arr = (char *)malloc(sizeof(char)*size);
	printf("Enter the Characters in the array :\n");
	for (i = 0;i <size;i++)
	{
		scanf(" %c", &arr[i]);
	}
	printf("Enter the character to be searched:\n");
	scanf(" %c", &ch);
	result=Search(arr, size,ch);
	printf("\n%d", result);
	return 0;
	
	

	
	
	
	/* program 
	int size = 0, i = 0, result = 0;
	char *arr = NULL ,ch='\0';
	printf("Enter Size of Array:\n");
	scanf("%d",&size);
	arr = (char *)malloc(sizeof(char)*size);
	printf("Enter the Characters in the array :\n");
	for (i = 0 ; i < size ; i++)
	{
		scanf(" %c", &arr[i]);
	}
	
	result=Difference(arr,size);
	if (result < 0)
	{
		result = -result;
	}
	printf("%d\t", result);
	return 0;
	*/


	/* program 10
	int size = 0, i = 0;
	int *arr = NULL;
	printf("Enter Size of Array:\n");
	scanf("%d",&size);
	arr = (int *)malloc(sizeof(int)*size);
	printf("Enter the Characters in the array :\n");
	for (i = 0 ; i < size ; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	pattern(arr,size);
	
	return 0;
	*/

}
