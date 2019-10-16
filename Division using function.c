#include<stdio.h>
float div(int, int);

void main()
{
int a,b;
float c;

printf("Enter the two numbers:");
scanf("%d %d",&a,&b);	
	
c=div(a,b);

printf("Division is %f:",c);	
	
}
float div(int x, int y)
{ float dv;
 dv=(float)x/y;
return(dv);
	
	
	
	
}
	
	
	
	
	

