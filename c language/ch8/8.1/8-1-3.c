#include<stdio.h>
main(){

int n;
printf("enter n: ");
scanf("%d",&n);

int i,a[n],b[n],c[n],d;
printf("\n");
	printf("enter array A's elements\n");

	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	printf("\n\n");
	printf("enter array B's elements");
	printf("\n");

	for(i=0;i<n;i++)
	{
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);		
	}
	
		printf("\n\n");
		printf("array c is ");
	for(i=0;i<n;i++)
	{
		d=a[i]+b[i];
		
			printf("%d,",d);	
	}	
	
	
	
}
