#include <stdio.h>

int main() {
    int r,c;

    printf("Enter the array's row & column size: ");
    scanf("%d", &r);
    c=r;

    int a[r][c],i,j;

    printf("\nEnter array's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int t[c][r];

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            t[i][j] = a[j][i];
        }
    }

    printf("\nThe transpose matrix of the array:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

}

