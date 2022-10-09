#include<stdio.h>

int main()
{
	float l,b,p;
	printf("enter the length of rectangle = ");
	scanf("%f",&l);
	printf("enter the bredth of rectangle = ");
	scanf("%f",&b);
	p = 2*(l+b);
	printf("perimeter of rectangle = %f",p);
	return 0;
}
