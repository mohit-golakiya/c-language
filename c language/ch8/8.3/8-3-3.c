#include<stdio.h>
main()
{
	int r,c;
	printf("enter rows: ");
	scanf("%d",&r);
	printf("enter columns: ");
	scanf("%d",&c);
	
	int i,d,j,a[r][c],sum;
	
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
			
			
			if(i==j)
			{
				sum+=a[i][j];
			
			}
			else
			{
				printf("  ");
			}
		}
	}
	printf("\n\nthe sum of diagonal elements %d ",sum);
	
}

