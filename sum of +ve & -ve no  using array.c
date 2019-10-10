#include<stdio.h>

main()
{
int a[5];
int i,pos=0,neg=0;

for(i=0;i<=4;i++)
	{ printf("Enter the numbers:");
		scanf("%d",&a[i]);
	}

	   for(i=0;i<=4;i++)
       {

		if(a[i]>0)
		{
		 pos+=a[i];

		}
        if(a[i]<0)
		{
		 neg+=a[i];

		}
       }
         printf("sum of +ve no is is:%d",pos);
         printf("\n");
         printf("sum of -ve no is is:%d",neg);



}
