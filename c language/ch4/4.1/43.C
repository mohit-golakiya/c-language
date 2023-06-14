#include<stdio.h>
#include<conio.h>
main()
{
  int a,b;
  clrscr();
  printf("Enter a number :" );
  scanf("%d",&a);
  printf ("Enter a number :");
  scanf("%d",&b);
  a=a*b;
  b=a/b;
  a=a/b;
  printf("After swap A %d and B %d",a,b);
  getch();

}



