#include<stdio.h>
#include<conio.h>
main()
{
      int i,s,c=0;
      clrscr();
      for(i=1;i<=5;i++,c=0)
      {
	  for(s=1;s<=5-i;s++)
	  {
		printf(" ");
	}
	while(c!=2*i-1)
	{
	printf("*");
	c++;
	}
	printf("\n");
      }
      getch();
}