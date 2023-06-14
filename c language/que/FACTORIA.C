#include<stdio.h>
#include<conio.h>
void main()
{
	long long int n,i,f;
	f=i=1;
	clrscr();

	printf("enter a number : ");
	scanf("%d",&n);

	while(i<=n)

	{
	  f*=i;
	  i++;
	}

	printf("The factorial %d  = %lld",n,f);

   getch();
}