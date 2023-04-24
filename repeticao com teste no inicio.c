// conceito de repeticao com teste no inicio 
// fatorial é um conceito da matematica, é o numero vezes ele menos um ex: 4!= 4*3*2*1
#include <stdio.h>

int main()
{
    int n, i, fatorial; //aqui estao as variaveis que eu vou utilizar
    printf ("Entre o valor de n (0 <= n <13):");
    scanf ("%d", &n);
    fatorial = 1;
    i=1;
    while (i <= n)
    { fatorial = fatorial * i;
    i++;
    }
printf("%d! = %d\n", n, fatorial);
return 0;

}