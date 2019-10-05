#include<stdio.h>

main()
{
	
int i,num ,p=0;

printf("enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
	if(num%2==0)
	{
		p++;
	}
}
if(p==2)
{
	printf("the number is prime number:%d",num);
	}	
	else
{
		
	printf("the number is not prime number:%d",num);
}
	
	
	
	return 0;
	
	
}
