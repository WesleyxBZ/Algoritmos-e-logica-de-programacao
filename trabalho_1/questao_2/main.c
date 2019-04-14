#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bib.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float preco;    // declara��o
    char categoria; // de vari�veis;

    printf("\t\t=============================================\n");
    printf("\t\t=     Algoritmo para cacular o reajuste     =\n");
    printf("\t\t=  de um produto de acordo com a categoria  =\n");
    printf("\t\t=============================================\n\n");

    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);    // guardando 'preco' na mem�ria;

    printf("Digite a categoria do produto, 'a', 'b', 'c', ou 'd' para as demais categorias: ");
    scanf("%s", &categoria);    // guardando 'categoria' na mem�ria;

    system("cls");

    switch (categoria){ // entrando na fun��o e comparando 'categoria' com algum poss�vel case;
    case 'a':  // se 'categoria' 'a';
        printf("\nO valor reajustado com desconto de 50%% � de: R$%2.2f.\n\n", calculo_a(preco));    // chama a fun��o 'calculo_a(preco)' contida na biblioteca criada 'bib.h' e retornando com o valor do calculo;
        break;

    case 'b':   // se 'categoria' 'b';
        printf("\nO valor reajustado com desconto de 25%% � de: R$%2.2f.\n\n", calculo_b(preco));    // chama a fun��o 'calculo_b(preco)' contida na biblioteca criada 'bib.h' e retornando com o valor do calculo;
        break;

    case 'c':   // se 'categoria' 'c';
        printf("\nO valor reajustado com desconto de 15%% � de: R$%2.2f.\n\n", calculo_c(preco));    // chama a fun��o 'calculo_c(preco)' contida na biblioteca criada 'bib.h' e retornando com o valor do calculo;
        break;

    case 'd':   // se 'categoria' 'd';
        printf("\nO valor reajustado com desconto de 5%% � de: R$%2.2f.\n\n", calculo_d(preco)); // chama a fun��o 'calculo_d(preco)' contida na biblioteca criada 'bib.h' e retornando com o valor do calculo;
        break;
    default:
        printf("\nDigite uma categoria v�lida.\n\n");
    }

    system("pause");
}
