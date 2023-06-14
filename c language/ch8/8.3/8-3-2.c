#include<stdio.h>
main()
{
	int r,c;
	printf("enter rows: ");
	scanf("%d",&r);
	printf("enter columns: ");
	scanf("%d",&c);
	
	int i,j,a[r][c],b[r][c],d[r][c],sum;

	for(i=0;i<r;i++)
	
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
				sum = a[i][j] + b[i][j];
			printf("%d ",sum);
		
		}
		printf("\n");
	}

}

