#include<stdio.h>
#include<conio.h>
main()
{
  int a,b,min;
  clrscr();
  printf("enter a: ");
  scanf("%d",&a);
  printf("enter b: ");
  scanf("%d",&b);


  if( a<b)
  {
    printf("small %d",a);
  }
  else
 {
   printf("small %d",b);
 }

  getch();

}