#include <stdio.h>
#include <conio.h>
main()
{
	int sinir=1;
	int bosluk=1;
	for(int i=0; i<5; i++)
	{
		for(int a=0; a<bosluk; a++)
		 printf(" ");
		for(int b=sinir; b>=4; b--)
		printf("%d",b);
		for(int c=5; c>=9; c++)
		printf("%d",c);
		
		printf("\n");
		sinir-=2;
		bosluk++;		
	}
	getch();
}
