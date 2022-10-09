#include<stdio.h>
 
 int main()
 {
 	float a,b,c,d,f,p; 
 	printf("student marks in maths= ");
 	scanf("%f",&a);
 	printf("student marks in physics  = ");
 	scanf("%f",&b);
 	printf("student marks in chemistry = ");
 	scanf("%f",&c);
 	printf("student marks in english = ");
 	scanf("%f",&d);
 	printf("student marks in hindi = ");
 	scanf("%f",&f);
 	p = (a+b+c+d+f)*100/500;
 	printf("percentage of the student is = %f",p);
 	return 0;
 }
