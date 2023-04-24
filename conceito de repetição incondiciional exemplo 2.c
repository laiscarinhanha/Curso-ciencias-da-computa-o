//conceito de repetição incondicional exemplo 2 mais complexo
#include <stdio.h>
main()
{ int i, soma;
soma = 0;
for(i = 30; i>=5; i -= 1)
{if ((i%3) == 0) {printf("\t%2d\n", i); soma +=i;}}

printf("\t soma= %d\n", soma);
}