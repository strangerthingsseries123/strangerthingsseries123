#include<stdio.h>
int main()
{
	int fah,cel;
	printf("enter temperature in farenhite \n");
	scanf("%d",&fah);
	cel = 5*(fah-32/9);
	printf("temperature in celcius is %d\n",cel);
	return 0;
}
