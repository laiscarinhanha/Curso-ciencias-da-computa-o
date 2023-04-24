// conceito de acumulador

#include <stdio.h>
int main()

{
    int acum = 0;
    int cont=0;
    int y=0;
    do
    {printf ("valor =");
    scanf ("%d", &y);
    acum=acum+y; // é nessa linha que tem a variavel que acumula os valores digitados
    cont ++; //variavel que efetua a contagem
    } while (cont <3); //acumula 3 vezes porq o contador indica cont 3

    printf("ACUMULAMOS!!! %d", acum);
}