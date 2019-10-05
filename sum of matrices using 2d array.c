#include<stdio.h>
#include<stdlib.h>
main()
{


int a[2][2]	,b[2][2],c[2][2];
int i,j;

printf("Enter the elements of first matrix:");
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)

  {
  	scanf("%d",&a[i][j]);
  }

}

printf("Enter the elements of second matrix:");
for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)

  {
  	scanf("%d",&b[i][j]);
  }

}

 for(i=0;i<2;i++)
{
  for(j=0;j<2;j++)
	{
	c[i][j]=a[i][j]+b[i][j];

	}
}
printf("sum of matrices is\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d ",c[i][j]);
		if(j==1)
		printf("\n");
	}
}

return 0;








}
