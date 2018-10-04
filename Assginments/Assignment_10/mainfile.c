#include"Header.h"
int  main()
{

// program 1
	int i = 0, j = 0,size1=0,size2=0;
	int *arr = NULL, *brr = NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the size of Second array:\n");
	scanf("%d", &size2);
	brr = (int *)malloc(sizeof(int)*size2);
	for (j = 0;j < size2;j++)
	{
		scanf("%d", &brr[j]);
	}

	Display(arr, size1, brr, size2);
	return 0;
	
	
	/* program 2
	int i = 0, j = 0, size1 = 0, size2 = 0;
	int *arr = NULL, *brr = NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the size of Second array:\n");
	scanf("%d", &size2);
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second array:\n");
	for (j = 0 ; j < size2 ; j++)
	{
		scanf("%d", &brr[j]);
	}
	DisplayEven(arr, size1, brr, size2);
	return 0;
	*/




	/* program 4
	int i = 0, j = 0, size1 = 0, size2 = 0;
	int *arr = NULL, *brr = NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the size of Second array:\n");
	scanf("%d", &size2);
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second array:\n");
	for (j = 0; j < size2; j++)
	{
		scanf("%d", &brr[j]);
	}
	ArrayConcate(arr, size1, brr, size2);
	return 0;
	*/




	/* progam 5
	int i = 0, j = 0, size1 = 0, size2 = 0;
	int *arr = NULL, *brr = NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the size of Second array:\n");
	scanf("%d", &size2);
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second array:\n");
	for (j = 0; j < size2; j++)
	{
		scanf("%d", &brr[j]);
	}
	SumArray(arr, size1, brr, size2);
	return 0;
	*/
		
		
	
	
	
	/* program 6
	int i = 0, j = 0, size1 = 0, size2 = 0,iRet=0;
	int *arr = NULL, *brr = NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the size of Second array:\n");
	scanf("%d", &size2);
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second array:\n");
	for (j = 0; j < size2; j++)
	{
		scanf("%d", &brr[j]);
	}
	iRet=DiffArray(arr, size1, brr, size2);
	printf("Difference between addition of two arrays %d\n",iRet);

	return 0;
	*/
	
	
	
	/* program 7
	int i = 0, j = 0, size1 = 0, size2 = 0, iRet = 0, iRet1 = 0;;
	int *arr = NULL, *brr = NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the size of Second array:\n");
	scanf("%d", &size2);
	brr = (int *)malloc(sizeof(int)*size2);
	printf("Enter the elements in second array:\n");
	for (j = 0; j < size2; j++)
	{
		scanf("%d", &brr[j]);
	}
	MinArray(arr, size1, brr, size2);
	return 0;
	*/
	
	
	
	/* program 8
	int i = 0, j = 0, size1 = 0, size2 = 0, iRet = 0, iRet1 = 0;;
	int *arr = NULL, *brr = NULL;
	
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	int *Result = NULL;
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	Result=CopyArrayRev(arr, size1);
	printf("Elements after Reverse are:\n");
	for (i = 0;i < size1;i++)
	{
		printf("%d\t", Result[i]);
	}
	return 0;
	*/
	
	
	
	
	
	/* program9
	int i = 0, j = 0, size1 = 0, size2 = 0, iRet = 0, iRet1 = 0;;
	int *arr = NULL, *brr = NULL;
	int *Result=NULL;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	Result=CopyArray(arr, size1);
	for (i = 0;i < size1;i++)
	{
		printf("%d", Result[i]);
	}
	return 0;
	*/
	
	
	

	/* Palindrome
	int i = 0, j = 0, size1 = 0, size2 = 0, iRet = 0, iRet1 = 0;;
	int *arr = NULL, *brr = NULL;
	BOOL Result=TRUE;
	printf("Enter the size of first array:\n");
	scanf("%d", &size1);
	arr = (int *)malloc(sizeof(int)*size1);
	printf("Enter the elements in first array:\n");
	for (i = 0;i < size1;i++)
	{
		scanf("%d", &arr[i]);
	}
	Result=ChkPalindrome(arr, size1);
	if (Result == TRUE)
	{
		printf("TRUE:-> It is Palindrome\n");
	}
	else
	{
		printf("FALSE:-> It is not a Palindorme\n");
	}
	return 0;
	*/
	
}	
