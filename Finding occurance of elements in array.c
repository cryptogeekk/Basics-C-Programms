#include<stdio.h>

main()
{
int a[10],i;
int c=0,n;

for(i=0;i<10;i++)	
	{
		printf("Enter the elements of array [%d]:",i+0);
		scanf("%d",&a[i]);
	
	}
	printf("\n");
	
	printf("Enter the digit to find occurance:");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
	if(a[i]==n)	
	{
		c++;
		}	
		
	}
	printf("\n");
	
	printf("%d is repeated %d times",n,c);
	
	
}
