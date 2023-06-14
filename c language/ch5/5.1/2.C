#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     clrscr();

     printf("enter a number = ");
     scanf("%d",&n);
     if(n>0)
     {
	printf("positive");
     }
     else if (n==0)
     {
	printf("neutral");
     }
     else
     {
	printf("negative");
     }
     getch();
}