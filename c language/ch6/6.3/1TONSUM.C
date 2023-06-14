#include<stdio.h>
#include<conio.h>
main()
{
   int i,n,sum=0;
   clrscr();
   printf("enter a number: ");
   scanf("%d",&n);

	 for(i=1; i<=n; i++)
	{
	   sum+=i;
	}
       printf("sum of number  %d : %d",n,sum);




  getch();
}
