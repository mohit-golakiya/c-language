#include<stdio.h>
#include<conio.h>
main()
{
  int rows=5;
  int cols=5;

  for(int i=1;i<=rows;i++)
  {
	for(j=1;j<=cols;j++)
	{
		if(i == 1 || i == rows || j == 1 || (j == cols && i !=3 && i !4))
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
  }
getch();
}