#include<stdio.h>
int main()
{
	int n,i,a,b;
	printf("how many pair you want for sum = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{		printf("enter first number you want to sum=  ");
	        scanf("%d",&a);
	        printf("enter second number you want to sum=  ");
	        scanf("%d",&b);
	        printf("sum is %d\n",a+b);
	
	}

}