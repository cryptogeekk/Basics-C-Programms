#include<stdio.h>
#include<string.h>

main()
{
char a1[20]="anil";
char a2[20];
int i;

for(i=0;i<strlen(a1);i++)
{
	a2[strlen(a1)-i-1]=a1[i];
}
printf("%s",a2);
	
	
	
	
	
	
}
