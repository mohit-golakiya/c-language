#include<stdio.h>
main()
{
	int r,c;
	printf("enter rows: ");
	scanf("%d",&r);
	printf("enter columns: ");
	scanf("%d",&c);
	
	int i,d,j,a[r][c];
	float sum=0;
	float e;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	d=i*j;
	e=sum/d;
	printf("\n\n");
	printf("average: %f",e);
}
