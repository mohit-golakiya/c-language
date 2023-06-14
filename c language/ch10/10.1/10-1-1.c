#include<stdio.h>

void cube();
void itscube(){
	int a;
	printf("enter number: ");
	scanf("%d",&a);
	
	printf("%d\n\n",a*a*a);
}


void main(){
	printf("cube");
	
	itscube();
	
}
