#include<stdio.h>

main()
{
	int r,c;
	printf("enter number row : ");
	scanf("%d",&r);
	printf("enter number column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	for(i=0; i<r; i++){
		for(j=0; j<r; j++){
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int largest = a[0][0];
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(a[i][j]>largest){
				largest = a[i][j];
			}
		}
	}
	printf("the largest number : %d\n",largest);
}
