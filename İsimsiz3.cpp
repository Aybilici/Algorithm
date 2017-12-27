#include <stdio.h>
#include <conio.h>

main()
{
for (int i = 0; i <=100; i++)
if(i%5==0 && i%10!=0)
printf("%d \n", i);

for(int i = 5; i <= 100; i+=10)
printf("%d \n", i);
getch();
}
