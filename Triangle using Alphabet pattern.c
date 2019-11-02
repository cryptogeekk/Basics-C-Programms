#include<stdio.h>

main()
{
int i,j,k;

    for(i=1;i<=5;i++)	
	{
	k=1;
	for(j=1;j<=9;j++)
	{
	if(j>=6-i && j<=4+i)
	{
	printf("%c",k+64);	
	k++;
    }
	else
	{
	printf(" ");	
	}
		
		
		
		
	}
	
	printf("\n");
	
	
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
