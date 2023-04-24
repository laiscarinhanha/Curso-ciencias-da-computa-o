#include <stdio.h>

int main()
{
    int media, faltas;
    printf("Digite a media:");
    scanf ("%d", &media);
    printf("Digite o numero de faltas:");
    scanf ("%d", &faltas);
    
    if (media>=5)
        if (faltas<=25)
    printf("\n Aluno aprovado");
    else printf ("\n Aluno reprovado");
    
}
