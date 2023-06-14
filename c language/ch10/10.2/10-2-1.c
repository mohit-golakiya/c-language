#include <stdio.h>

int arraySum(int a[], int n) 
{
    int i,sum = 0;
    for (i=0; i<n; i++) 
	{
        sum+=a[i];
    }
    return sum;
}

int main() 
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int i,a[n];
    printf("Enter:\n");
    for (i=0; i<n; i++) 
	{
        printf("a[%d] =",i);
        scanf("%d", &a[i]);
    }
    int sum = arraySum(a,n);
    printf("Sum: %d\n",sum);

    return 0;
}

