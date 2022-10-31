#include<stdio.h>
int main()
{
	int a,b,c; //unit digit
	printf("enter the number value\n");
	scanf("%d",&a);
	b=a%10;
	c=a-b;
	printf("%d",c);
	return 0;
}    
