#include<stdio.h>
#include<math.h>

main()

{
	int a,b,c;
	double A;
	const double PI =3.1415926;
	
	printf("enter the of a:");
	scanf("%d",&a);
	
	printf("enter the of b:");
	scanf("%d",&b);
	
	
	printf("enter the of c:");
	scanf("%d",&c);
	
	A=(-pow(a,2)+pow(b,2)+pow(c,2))/(2*b*c);
	A*=180/PI;
	printf("the angle is :%f",A);
	
	return 0;
}
