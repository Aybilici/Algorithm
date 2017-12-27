#include <stdio.h>
#include <conio.h>
main()
{
	int son=5;
	int bosluk=1;
	for(int i=0; i<5; i++)
	{
		for(int a=0; a<bosluk; a++)
		 printf(" ");
		for(int b=1; b<=son; b++)
		printf("%d",b);
		
		son--;
		bosluk++;
		printf("\n");		
	}
	int son1=5;
	int bosluk1=5;
	for(int e=0; e<5; e++)
	{
		for(int d=0; d<bosluk1; d++)
		 printf(" ");
		for(int c=son1; c<=5; c++)
		printf("%d",c);
		
		son1--;
		bosluk1--;
		printf("\n");		
	}
	getch();
}
