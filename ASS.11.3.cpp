#include<stdio.h>
int main()
{
	printf("enter no.of times you want to say hello");
	int c, i=0;
	scanf("%d",&c);
	while(i<c)
	{	
		printf("hello world\n");
		i++;
	}
	printf("exit from while ");
	return 0;
}

