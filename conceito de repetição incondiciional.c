//conceito de repetição incondicional
#include <stdio.h> 
main()
{int i;
for( i = 9; i >= 3; i-=1) //o comando for é como se fosse um contador interno, ele repete o trexo do programa enquanto ele estiver entre chaves
{ if ( (i % 3) ==0) //o comando if percentual 3 faz o programa exibir só os divisiveis por 3
{printf ("\t%2d\n", i); // ele so exibe no print f, os comandos divisiveis por 9
}}}