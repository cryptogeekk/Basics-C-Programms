#include<stdio.h>



main()
{
int a[2][2],i,j;

printf("Enter the values of matrix:");

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

scanf("%d",&a[i][j]);	
	
}
}
printf("matrix before replacing:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[i][j]);
	
}

printf("\n");

}



a[0][0]=5;
a[1][1]=6;

printf("matrix after replacing:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("%d\t",a[i][j]);
}
printf("\n");
}



















	
}
