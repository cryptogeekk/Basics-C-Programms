#include<stdio.h>
main()
{
    int a[10],i;
    int temp[9];
	int max,max2,position;
    
    printf("Enter numbers in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    position=0;

    for(i=0;i<10;i++)//find first max number
    {
        if(a[i]>max)
        {
            max=a[i];
            position=i;
        }
    }
    for(i=0;i<9;i++)//deleting first maximum number in array
    {
        if(i<position)
        {
            temp[i]=a[i];
        }
        if(i>=position)
        {
         temp[i]=a[i+1];
        }

    }
    max2=temp[0];
    printf("\n");
    for(i=0;i<9;i++)//finding second max in the remaining elements
    {
        if(temp[i]>max2)
        {
            max2=temp[i];

        }
    }

    printf("The fisrt largest number is %d\n",max);
    printf("The second largest number is %d\n",max2);

}
