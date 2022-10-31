#include<stdio.h>
int main()
{
	int N;//N=number
	printf("enter the first N natural number in reverse\n");
	scanf("%d",&N);
	while(N>=1&&N>0)
	{
		printf("\n%d\n",N);
		N=N-1;
	}
	return 0;
	
}
