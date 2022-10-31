#include<stdio.h>
int main()
{
	int A,B,N;
	printf("enter the value of N pairs\n");
	scanf("%d",&N);
	while(N>0)
	{
		printf(" enter N pairs\n");
		scanf("%d%d",&A,&B);
		printf("sum of the N pair is %d\n ",A+B);
		N=N-1;
	}
	return 0;
}    
