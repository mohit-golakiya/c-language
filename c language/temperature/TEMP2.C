#include<stdio.h>
#include<conio.h>
main()
{
   int a,count=0;
   clrscr();
   printf("enter a number : ");
   scanf("%d",&a);

	 while(a!=0)
	 {
	 a/=10;
	 count++;
	 }
	 printf("total number %d",count);

 getch();
}