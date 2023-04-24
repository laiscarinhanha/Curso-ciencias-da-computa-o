#include <stdio.h>
int main()
{
       int codigo_menor_cidade = 0;
       int codigo_maior_cidade = 0;
       int indice_menor_cidade = 0;
       int indice_maior_cidade = 0;
       int soma_geral_de_veiculos = 0;
       int media_de_veiculos_cidades = 0.0;               
       int soma_acidentes_menor_2000 = 0;
       int media_de_acidentes_menor_2000 = 0.0;
       int numero_cidades = 0;
       int numero_cidades_veiculos_menor_200 = 0;        
       int continuar_a_pedir_dados = 1;

       while (continuar_a_pedir_dados <= 1)
       {
           printf("Insira o Codigo da Cidade diferente de 0:");
           scanf("%d", &codigo_digitado);

           printf("Insira numero veiculos de passeio:");
           scanf("%f", &veiculos_digitado);

           printf("Insira número de acidentes de trânsito com vítimas:");
           scanf("%g", &acidentes_digitado);

           soma_geral_de_veiculos + veiculos_digitado;
           numero_cidades += 1;

           if (acidentes_digitado < indice_menor_cidade ou indice_menor_cidade == 0);
           {codigo_menor_cidade = codigo_digitado;
            indice_menor_cidade = acidentes_digitado;}

           if (acidentes_digitado > indice_maior_cidade ou indice_maior_cidade == 0);
           {codigo_maior_cidade = codigo_digitado;
               indice_maior_cidade = acidentes_digitado;}            

           if (veiculos_digitado<2000);
           {soma_acidentes_menor_2000 += veiculos_digitado;
               numero_cidades_veiculos_menor_200 +=1;}

           printf ("Para continuar digite 1: ");
           read (continuar_a_pedir_dados); 
       }

       media_de_veiculos_cidades = soma_geral_de_veiculos / numero_cidades;
       media_de_acidentes_menor_2000 =  soma_acidentes_menor_2000 / numero_cidades_veiculos_menor_200;

       printf("\nCodigo menor cidade: ", codigo_menor_cidade);

       printf("\nCodigo maior cidade: ", codigo_maior_cidade);

       printf("\nMedia de Veiculos: ", media_de_veiculos_cidades);

       printf("\nMedia de Veiculos Menor 2000: ", media_de_acidentes_menor_2000);

   }