#include<stdio.h>
#include<conio.h>
main()
{
   int principal,rate,interest,time;
   clrscr();
   printf("Enter the principal: ");
   scanf("%d",&principal);
   printf("Enter the rate : ");
   scanf("%d",&rate);
   printf("Enter the time: ");
   scanf("%d",&time);
   printf("Simple interest : %d",(principal*rate*time) / 100);
   getch();

}