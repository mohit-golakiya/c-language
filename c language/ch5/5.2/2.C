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

    if(a==b && b==c && c==d && d==a)
    {
		printf("All are same");
    }
    else if(a==b)
    {
		if(a>c)
		{
			printf("a and b are big");
		}
		else
		{
			printf("c is big");
		}
    }
    else if(b==c)
    {
		if(b>d)
		{
			printf("b and c are big");
		}
		else
		{
			printf("d is big");
		}
    }
    else if(c==d)
    {
		if(c>a)
		{
			printf("c and d are big");
		}
		else
		{
			printf("a is big");
		}
    }
    else if(d==a)
    {
		if(d>b)
		{
			printf("d and a are big");
		}
		else
		{
			printf("b is big");
		}
    }
    else if(a>b)
    {
		if(a>c)
		{
			printf("a is big");
		}
		else
		{
			printf("c is big");
		}
    }
    else if(b>c)
    {
		if(b>d)
		{
			printf("b is big");
		}
		else
		{
			printf("d is big");
		}
    }
    else if(c>d)
    {
		if(c>a)
		{
			printf("c is big");
		}
		else
		{
			printf("a is big");
		}
    }
    else if(d>a)
    {
		if(d>b)
		{
			printf("d is big");
		}
		else
		{
			printf("b is big");
		}
    }
   getch();

}
