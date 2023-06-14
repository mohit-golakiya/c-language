#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,c=1;
      clrscr();
      for(i=11;i<=15;i++)
      {
	for(j=11;j<=i;j++)
	{
		printf("%d ",c);
		c++;
	}
	printf("\n");
      }

	getch();
}