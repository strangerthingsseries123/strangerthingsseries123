#include<stdio.h>
int main()
{
	int N;//N=number
	printf("enter the first 10 odd natural number \n");
	scanf("%d",&N);
	while(N<=10&&N>0)
	{
		printf("\n%d\n",N);
        N=2*N-1;
	}
	return 0;
	
}
