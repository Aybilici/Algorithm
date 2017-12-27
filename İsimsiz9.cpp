#include <stdio.h>
#include <conio.h>
main()
{
	int sayi1,sayi2,secim;
	
	printf("1.sayiya giriniz: ");
	scanf("%d",&sayi1);
	printf("2.sayiya giriniz: ");
	scanf("%d",&sayi2);
	
	printf("1.toplama\n ");
	printf("2.cikarma\n ");
	printf("seciniz(1/2): ");
	scanf("%d",&secim);
	if(secim==1)
	printf("%d", sayi1+sayi2);
	else if (secim==2)
	printf("%d", sayi1-sayi2);
	else
	printf("seciminiz dogru girin: ");
	getch();
}
