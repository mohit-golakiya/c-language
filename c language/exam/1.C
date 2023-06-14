
#include<stdio.h>
#include<conio.h>
void main()
{
     int i=1,n;
     int sum=0;
     clrscr();

     printf("enter a number : ");
     scanf("%d",&n);

     while(i<=n)
     {
	if(i%2==1)
	printf("\n %d",i);
	sum = sum + i;

	i++;

     }
	printf("%d",sum);
  getch();
}