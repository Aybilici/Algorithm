#include <stdio.h>
#include <conio.h>

main()
{
	int us, taban;
    printf("Sayinin ussunu girin: ");
    scanf("%d",&us);
    printf("Tabani girin: "); 
    scanf("%d",&taban); 
    int b = taban;
    for (int a = 1; a<us; a++)

        b = taban * b;
        
    printf("n\Sonuc: %d",b);

	getch();
}
