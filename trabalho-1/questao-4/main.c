#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bib.h"

int alunos(){

    int n_alunos; // declarando variav�l

    printf("Digite o n�mero de alunos em sua sala: ");
    scanf("%d", &n_alunos); // guardando 'n_alunos' na mem�ria;

    return n_alunos;    // retornando com valor de 'n_alunos' para main;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float nota1, nota2, nota3, n_alunosrep=0, res_alun_rep; // declarando vari�veis e igualando alguma a zero;
    int faltas, mf, n_alunos, i=0;

    printf("\t\t===================================\n");
    printf("\t\t= Algoritmo para calcular a m�dia =\n");
    printf("\t\t= aritm�tica da nota de uma turma =\n");
    printf("\t\t===================================\n\n");

    n_alunos = alunos(); // chamando funcao 'alunos()' e guardando valor;

    while(i < n_alunos){    // enquanto 'i' (contador) for menor que 'n_alunos';
            printf("\nDigite sua 1� nota: ");
            scanf("%f", &nota1);
            printf("Digite sua 2� nota: ");        // Guadando as notas do aluno na mem�ria;
            scanf("%f", &nota2);
            printf("Digite sua 3� nota: ");
            scanf("%f", &nota3);
            printf("Digite seu n�mero de faltas: ");
            scanf("%d", &faltas);

            mf = calculo(nota1, nota2, nota3);  // chamando fun�ao 'calculo()' contida na biblioteca 'bib.h' e guardando valor do c�lculo;

            if(mf >= 9 && mf <= 10 && faltas <= 15) // testando estrutura de decis�o para ver em qual chave se encaixa a 'mf' e as 'faltas';
            {
                printf("\nAprovado, nota 'A'.\n");
            }
            else if(mf >= 7.5 && mf < 9 && faltas <= 15)
                {
                    printf("\nAprovado, conceito 'B'.\n");
                }
                else if(mf >= 5 && mf < 7.5 && faltas <= 15)
                    {
                        printf("\nAprovado, conceito 'C'.\n");
                    }
                    else if(mf < 7 && faltas > 10)
                        {
                            printf("\nVoc� est� reprovado.\n");
                            n_alunosrep ++; // caso o aluno reprovar, ser� adicionado + 1 ao contador de alunos reprovados;
                        }
                        else if(mf < 5 || faltas > 15)
                            {
                                printf("\nVoc� est� reprovado.\n");
                                n_alunosrep ++; // caso o aluno reprovar, ser� adicionado + 1 ao contador de alunos reprovados;
                            }
                            i++ == n_alunos;
                        }

    res_alun_rep = calc_alun_rep(n_alunosrep, i); // chamando fun��o 'calc_alun_rep()' contida na biblioteca 'bib.h' e guadando valor do calculo na mem�ria.

    printf("\n________________________________________________\n");
    printf("\nO percentual de alunos reprovados � de: %2.1f%%.\n\n", res_alun_rep );

    system ("pause");
}
