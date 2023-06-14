#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    clrscr();
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
	printf(" \n %d * %d = %d",i,n,i*n);
    }

getch();
}