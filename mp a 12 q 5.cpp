#include<stdio.h>
int main()
{
	int a,i,n;
	a = printf("enter a number you want a last digit as zero = ");
	scanf("%d",&a);
	i = a/10;
	n = i*10;
	printf("number is now = %d",n);
	
}