#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 2

void StrCpyX(char *,char *);
void StrNCpyX(char *,char *,int);
void StrCpyCap(char *,char *);
void StrCpySmall(char *,char *);
void StrCatX(char *,char *);
void StrNCatX(char *,char *,int);
BOOL StrCmpX(char *,char *);
BOOL StrNCmpX(char *,char *,int);
void StrRevX(char *);
BOOL StrPallindrome(char *);
