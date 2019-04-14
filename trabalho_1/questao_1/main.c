#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bib.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float salario, financiamento, res;

    printf("\t\t================================\n");
    printf("\t\t= Algoritmo para saber se voc� =\n");
    printf("\t\t= pode obter um financiamento  =\n");
    printf("\t\t================================\n\n");

    printf("Digite seu s�lario: ");
    scanf("%f", &salario);  // guardando valor 'salario';
    printf("Digite o valor de financiamento pretendido: ");
    scanf("%f", &financiamento); // guardando valor 'financiamento';

    system("cls");

    res = calculo(salario); // chamando fun��o 'calculo(salario)' contida na biblioteca e posteriormente guardando resultado da fun��o;

    if(financiamento <= res){   // se o financiamento for menor que 5 x o sal�rio;
        printf("\nParab�ns, seu financiamento foi concebido.\n");
    }else{  // se n�o for.
        printf("\nO seu financiamento foi negado.\n");
    }

    printf("Obrigado pela prefer�ncia.\n\n");

    system("pause");
}
