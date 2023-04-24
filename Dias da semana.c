#include <stdio.h>

int main ()
{
    int dia;
    printf("Digite um dia da semana:");
    scanf("%d", &dia);

    switch(dia)
    {   case 1:
    printf("\nSegunda-feita");
    break;
        case 2:
    printf("\nTerca-feira");
    break;
    }

}