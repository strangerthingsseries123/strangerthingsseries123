#include<stdio.h>

int main()
{
	float km,m;
	printf("enter the distance between two cities in km = ");
	scanf("%f",&km);
	m = km*1000;
	printf("distance between two cities in metre = %f",m);
	return 0;
}
