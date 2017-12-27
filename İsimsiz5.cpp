#include <stdio.h>
#include <conio.h>

main()
{
char kelime[20]="";
int adet=0;
printf("bir kelime girin: ");
scanf("%s",kelime);
printf("ekrana yazilma adetini girin: ");
scanf("%d",&adet);

for (int i = 0; i < adet; i++)
printf("%s \n", kelime);
getch();
}

