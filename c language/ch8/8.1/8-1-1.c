
#include<stdio.h>
main(){

int n;
printf("enter n: ");
scanf("%d",&n);

int i,a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]: %d\n",i,a[i]);
	}
	printf("length of array: %d",n);
}
