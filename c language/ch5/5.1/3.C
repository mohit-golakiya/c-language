#include<stdio.h>
#include<conio.h>
main()
{

     int z;
     clrscr();
     printf("Your Marks : ");
     scanf("%d",&z);

     if(z>=0 && z<=33)
     {
     printf("fail");
     }
     else if (z>=90 && z<=100)
     {
     printf("A1");
     }
     else if (z>=80 && z<=89)
     {
     printf("A2");
     }
     else if (z>= 70 && z<=79)
     {
     printf("B1");
     }
     else if (z>=60 && z<=69)
     {
     printf("B2");
     }
     else if (z>= 50 && z<=59)
     {
     printf("C1");
     }
     else if (z>= 40 && z<=49)
     {
     printf("C2");
     }
     else if (z>=30 && z<=39)
     {
     printf("D1");
     }
     else if (z>=30 && z<=32)
     {
     printf("D2");
     }
     else
     {
     printf("invalid marks");
     }

       getch();
}

