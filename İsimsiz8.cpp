#include <stdio.h>
#include <conio.h>

main()
{
	int sayi=0;
	int sayac=0;
	printf("bir sayi girin: ");
	scanf("%d",&sayi);
	for (int i = 2 ; i < sayi ; i++)
	if(sayi%i==0)
	sayac++;
	if(sayac==0)
	printf("girilen sayi asaldir ");
	else
	printf("girilen sayi asal degil ");
	getch();
}
