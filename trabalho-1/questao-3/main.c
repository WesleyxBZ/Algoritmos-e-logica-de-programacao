#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int maior, num_rep=0, i, num1, num2, opc; // declara��o de vari�veis;

    printf("\t\t================================================\n");
    printf("\t\t= Algoritmo para saber qual � o maior n�mero   =\n");
    printf("\t\t=   digitado e quantas vezes ele se repete     =\n");
    printf("\t\t================================================\n\n");

    printf("Quantos n�meros deseja digitar: ");
    scanf("%d", &opc);  // guardando na mem�ria valor de 'opc';

    printf("\n\n");

    printf("Digite um n�mero:");
    scanf("%d", &num1); // guardando na mem�ria valor de 'num1';
    maior = num1;   // 'num1' passa a ser o maior valor;

    for(i=1; i<opc; i++)    // entrando no la�o, para 'i=1' e 'i' menor que 'opc', 'i = i + 931';
    {
        printf("Digite um n�mero:");
        scanf("%d", &num2); // guardando na mem�ria valor de 'num2';

        if(maior == num2)   // se 'maior' (num1) for igual a 'num2';
            {
                num_rep++;  // contador 'num_rep' adiciona 1 na mem�ria;
            }
        if (num2 > maior)   // se 'num2' for maior que 'maior' (num1);
            {
                maior = num2;   // 'num2' passa a ser o maior n�mero;
                num_rep=1;  // contador 'num_rep' se mantem com mesmo valor na mem�ria;
            }
    }

    printf("\n_______________________________________\n");
    printf("\nO maior n�mero � %d e se repetiu %d vezes\n\n\n\n", maior, num_rep);

    system("pause");
}
