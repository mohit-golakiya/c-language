#include<stdio.h>
#include<conio.h>
main()
{
	char letter = 'a';
	clrscr();

	do
	{       printf("%c",letter);
		letter+=4;
	}
	while(letter<='z');


  getch();
}
