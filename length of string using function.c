#include<stdio.h>
#include<string.h>
int stringlength(char[5]);
main()
{
char a[5];
int length;

printf("Enter a string to calculate its length:");
gets(a);

length=stringlength(a);
printf("length of string is %d",length);
}

int stringlength(char x[5])
{
 int b;
 b=strlen(x);
 
 return b;	
}





