#include <stdio.h>
#include <conio.h>

main()
{
char kelime[20]="";
printf("bir kelime girin: ");
scanf("%s",kelime);

for (int i = 0; i < 10; i++)
printf("%s \n", kelime);
getch();
}
