#include <stdio.h>
#include <conio.h>
main()
{
	int adet1=9;
	int bosluk1=1;
	for(int i=0; i<5; i++)
	{
		
		for(int a=0; a<bosluk1; a++)
		 printf(" ");
		for(int j=0; j<adet1; j++)
		printf("*");
		
		adet1-=2;
		bosluk1++;
		printf("\n");
		
	}
	int adet=1;
	int bosluk=5;
	for(int i=0; i<5; i++)
	{
		
		for(int a=0; a<bosluk; a++)
		 printf(" ");
		for(int j=0; j<adet; j++)
		printf("*");
		
		adet+=2;
		bosluk--;
		printf("\n");
		
	}
	getch();
}
