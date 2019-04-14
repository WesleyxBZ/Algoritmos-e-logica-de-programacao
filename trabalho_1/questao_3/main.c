#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int maior, num_rep=0, i, num1, num2, opc; // declaração de variáveis;

    printf("\t\t================================================\n");
    printf("\t\t= Algoritmo para saber qual é o maior número   =\n");
    printf("\t\t=   digitado e quantas vezes ele se repete     =\n");
    printf("\t\t================================================\n\n");

    printf("Quantos números deseja digitar: ");
    scanf("%d", &opc);  // guardando na memória valor de 'opc';

    printf("\n\n");

    printf("Digite um número:");
    scanf("%d", &num1); // guardando na memória valor de 'num1';
    maior = num1;   // 'num1' passa a ser o maior valor;

    for(i=1; i<opc; i++)    // entrando no laço, para 'i=1' e 'i' menor que 'opc', 'i = i + 931';
    {
        printf("Digite um número:");
        scanf("%d", &num2); // guardando na memória valor de 'num2';

        if(maior == num2)   // se 'maior' (num1) for igual a 'num2';
            {
                num_rep++;  // contador 'num_rep' adiciona 1 na memória;
            }
        if (num2 > maior)   // se 'num2' for maior que 'maior' (num1);
            {
                maior = num2;   // 'num2' passa a ser o maior número;
                num_rep=1;  // contador 'num_rep' se mantem com mesmo valor na memória;
            }
    }

    printf("\n_______________________________________\n");
    printf("\nO maior número é %d e se repetiu %d vezes\n\n\n\n", maior, num_rep);

    system("pause");
}
