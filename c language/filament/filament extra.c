#include <stdio.h>

main()
{
	int i;
	char str[50];
	printf("enter the string : ");
	gets(str);
	for(i=0; str[i]; i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	} 
	str[0]=str[0]-32;
	for(i=1; str[i]; i++)
	{
		if(str[i]==' ')
			str[i+1]-=32;
	}
	printf("\n%s",str);
}


