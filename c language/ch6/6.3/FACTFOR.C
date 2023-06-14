#include<stdio.h>
#include<conio.h>
main()
{
    long long int i=1,n,fact=1;
    clrscr();
    printf("enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
	fact*=i;
    }
    printf("factorial is %d : %lld",n,fact);

getch();
}
