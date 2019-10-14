#include<stdio.h>

main()
{
  int a[3][3],i,j;
  
  for(i=0;i<3;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		printf("Enter the elements of array [%d][%d]:",i+0,j+0);
  		scanf("%d",&a[i][j]);
	  }
	  }	
	printf("\n");
	printf("The tabular form is");
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		
		for(j=0;j<3;j++)
		{
			
			printf("%d\t",a[i][j]);
		}
		
		
	}
	
	
	
}
