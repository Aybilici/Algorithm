#include <stdio.h>
#include <conio.h>

main()
{
	int sayi=0;
	int adet=0;
	printf("sayi girin: ");
	scanf("%d",&sayi);
	for (int i = 50; i < 200; i++)
	if(i%sayi==0)
	 adet++;
	 
	printf("%d adet sayiya kalansiz bulunur ", adet);
	getch();
}
