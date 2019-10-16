#include<stdio.h>


struct Book 
{
	int id,price;
	char name[10];
}b[3];

main()
{
	
int i,max=2;
for(i=0;i<max;i++)	
{
printf("Enter the %d book id\n",i+1);
scanf("%d",&b[i].id);	
	
printf("Enter the %d book name\n",i+1);
scanf("%s",&b[i].name);		
	
	
printf("Enter the %d book price\n",i+1);
scanf("%d",&b[i].price);		
	
	}	
	
	for(i=0;i<max;i++)
	{
		
	printf("Book %d id=%d\n",i+1,b[i].id);	
	printf("Book %d name=%s\n",i+1,b[i].name);		
	printf("Book %d price=%d\n",i+1,b[i].price);		
	
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
