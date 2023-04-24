#include <stdio.h>

int main()
{ int cidade, acidentes;
    printf("Digite o codigo da cidade:");
    scanf("%d", &cidade);
    printf ("Digite o numero de acidentes");
    scanf("%d" &acidentes);
    switch(cidade)
    {   case 1:
    printf("\nCutiriba");
    break;
        case 2:
    printf("\nLodrina");
    break;
        case 3:
    printf("\nMaringa");
    break;
        case 4:
    printf("\nCascavel");
    break;
    }
    if (acidentes<=25)
    printf("\n Numero normal");
    else printf ("\n Morte demais");
}
    