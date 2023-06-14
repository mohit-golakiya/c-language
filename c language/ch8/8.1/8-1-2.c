#include<stdio.h>
main(){

int n;
printf("enter n: ");
scanf("%d",&n);

int i,a[n];
float sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		sum += a[i];
	
	}
	
		printf("sum: %d\n",sum);
		printf("average: %f",sum/n);

}
