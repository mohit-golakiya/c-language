#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    clrscr();

    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);

    if(a==b && b==c && c==a)
    {
	    printf("All are same");
    }
    else  if(a==b)
    {
	if (a<c)
	{
		printf("a and b are small");
	}
	else
	{
		printf("c is small");
	}
    }
    else  if(c==b)
    {
	if (b<a)
	{
		printf("b and c are small");
	}
	else
	{
		printf("a is small");
	}
    }
    else  if(a==c)
    {
	if (a<b)
	{
		printf("a and c are small");
	}
	else
	{
		printf("b is small");
	}
    }
    else if (a<b)
    {
	if(a<c)
	{
		printf("a is small");
	}
	else
	{
		printf("c is small");
	}
    }
    else
    {
		if(b<c)
	{
		printf("b is small");
	}
	else
	{
		printf("c is small");
	}
    }

   getch();

}
