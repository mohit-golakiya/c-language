#include <stdio.h>

int main() {
    int r, c,i,j;
    
    printf("Enter row: ");
    scanf("%d", &r);
    
    printf("Enter column: ");
    scanf("%d", &c);
    
    int a[r][c];
    
    printf("\nEnter elements:\n");
    
    for (i=0; i<r; i++) 
	{
        for(j=0; j<c; j++) 
		{
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int rs,x=0;
    printf("\nEnter row: ");
    scanf("%d", &rs);
    for (j=0; j<c; j++) 
	{
        x+= a[rs][j];
    }
    printf("sum row %d: %d\n",rs,x);
    
    int cs,y = 0; 
    printf("\nEnter column: ");
    scanf("%d", &cs);
    for (i = 0; i<r; i++) 
	{
        y+=a[i][cs];
    }
    printf("sum column %d: %d\n",cs,y);
    
}

