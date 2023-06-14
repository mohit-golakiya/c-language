#include<stdio.h>
#include<conio.h>
main()
{
int i,n,a=0,b=1,c;
 clrscr();
 printf("enter a number: ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
	printf("%d ",a);
	c=a+b;
	a=b;
	b=c;
 }
 getch();
}
