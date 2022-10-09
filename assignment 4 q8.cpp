#include<stdio.h>

int main()
{
	float km,m;
	printf("enter the distance between two cities in km = ");
	scanf("%f",&km);
	m = km*100000;
	printf("distance between two cities in centimetre = %f",m);
	return 0;
}
