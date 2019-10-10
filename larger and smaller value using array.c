#include<stdio.h>

main()
{
int a[5];
int i,n,sum=0;
float avg;
printf("Enter the marks of students:");
    for(i=0;i<5;i++)
	{
	 
		scanf("%d",&a[i]);
	}
	printf("\n");
	 printf("Enter the number of students in the class:");
	  scanf("%d",&n);
    printf("\n");
	  for(i=0;i<5;i++)
	  {
	  	sum+=a[i];
	  }
     avg=sum/n;
     printf("the average marks of students in the class is %f",avg);
}
