#include<stdio.h>

void div();
void div(){
	int a;
	printf("enter number: ");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0)
	{
		printf("divisible by 3 and 5");
	}
	else
	{
		printf("not divisible by 3 and 5");
	}
}


void main()
{	
	div();	
}
