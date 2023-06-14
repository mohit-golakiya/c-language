#include<stdio.h>
#include<conio.h>
main()
{
	int i=11,n;
	clrscr();

	printf("enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
			if(n%11==0)
			{
				printf("palidrome number : ");
			}
			else
			{
			printf("non palidrome number : ");

			}
	n++;
	break;

  }
getch();
}