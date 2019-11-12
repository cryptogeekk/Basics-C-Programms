#include<stdio.h>
#include<string.h>

main()
{
	char s1[10]="anil";
	char s2[10]="hi";
	int i,a=3;
	for(i=0;i<strlen(s2);i++)
	{
		s1[4+i]=s2[i];
	}
	printf("%s",s1);

	
}
