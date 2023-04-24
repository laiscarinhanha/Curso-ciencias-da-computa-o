// condicao testada no final
#include <stdio.h>
int main()

{
int x, fat;
printf ("Entre o valor de n (0 <=n < 13");
scanf("%d", &x);
fat= 1;
do 
{fat = fat * x;
x--; } //quando colocamos x-- estamos retirando o 1
while (x > 1);
printf("Resultado= %d\n",fat);
return 0;
}
