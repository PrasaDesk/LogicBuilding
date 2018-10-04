#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
void Display(int *, int, int *, int);
void DisplayEven(int *, int, int *, int);
void ArrayConcate(int *, int, int *, int);
void SumArray(int *, int, int *, int);
int DiffArray(int *, int, int *, int);
int MinArray(int *, int, int *, int);
int* CopyArrayRev(int *, int);
int* CopyArray(int *, int);
BOOL ChkPalindrome(int *arr, int size);




