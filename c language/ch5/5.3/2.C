#include<stdio.h>
#include<conio.h>
main()

{
   int a,b,c,d;
   clrscr();

   printf("enter a : ");
   scanf("%d",&a);
   printf("enter b : ");
   scanf("%d",&b);
   printf("enter c : ");
   scanf("%d",&c);
   printf("enter d : ");
   scanf("%d",&d);

   (a>b)
	?(a>c)
		?(a>d)
			?printf("a is max")
			:printf("d is max")
		:(c>d)
			?printf("c is max")
			:printf("d is max")
	:(b>c)
		?(b>d)
		       ?printf("b is max")
		       :printf("d is max")
		:(c>d)
		      ?printf("c is max")
		      :printf("d is max");

   getch();
}