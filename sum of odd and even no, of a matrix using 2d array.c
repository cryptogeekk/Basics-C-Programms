#include<stdio.h>


main()
{
	int a[5],i;
	int even=0;
	int odd=0;
	printf("Enter the elements of matrix:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		even+=a[i];
	
	}
		printf("sum of even postioned no is%d",even);
		printf("\n");
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==1)
		odd+=a[i];
	
	}
		printf("sum of odd postioned no is%d",odd);
	
}
