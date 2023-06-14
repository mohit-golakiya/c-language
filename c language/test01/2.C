#include<stdio.h>
#include<conio.h>
main()
{
   int bs = 100;
   int HRA,DA,TA;
   clrscr();
   printf("base salary : ");
   scanf("%d",&bs);
   HRA = (bs * 0.1);
   TA  =  (bs * 0.05);
   DA  = (bs * 0.08);
   printf("Total : %d", bs + HRA + TA + DA);

   getch();
}

