#include<stdio.h>
int main()
{ int a;
	printf("enter a number : ");
	scanf("%d",&a);
	
	if(a==0){
		printf("nuumber you enter is zero");
	}
	else if(a>0){
	
	 printf("positive");
	}
	else
	 printf("negative");
return 0;
}
