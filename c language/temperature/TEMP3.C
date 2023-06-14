#include<stdio.h>
#include<conio.h>
main()
{
	int fn,ln,num,sum;
	clrscr();
	printf("enter number : ");
	scanf("%d",&num);

	ln=num%10;
	while(num>=10)
	{
		num=num/10;
	}
	fn=num;

	sum=fn+ln;
	printf("sum %d : %d \n",sum);

	getch();
}