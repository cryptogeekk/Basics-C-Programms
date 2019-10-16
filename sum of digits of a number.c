#include<stdio.h>

main()
{
int rem,sum=0,n;

printf("Enter the number:");
scanf("%d",&n);

while(n>0)
{
rem=n%10;
sum+=rem;
n=n/10;
}

printf("sum of number is :%d",sum);	
	
	
}
