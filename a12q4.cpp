#include<stdio.h>
int main()
{
	int i,a,f=1;
	printf("enter a number for factorial = %d");
	scanf("%d",&a);
	for(i=a;i>0;i--)
	{
		f = f*i;
	}
	printf("factorial is = %d",f);
	
}