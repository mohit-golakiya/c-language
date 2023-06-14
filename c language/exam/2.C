#include<stdio.h>
#include<conio.h>
void main()
{
     int i=100,n;
     clrscr();

     printf("enter a number : ");
     scanf("%d",&i);

     while(i<=100)
     {
	if(i%11==0)
	{
	  printf("%d \n",i);

	}
	i++;
     }
     getch();
}