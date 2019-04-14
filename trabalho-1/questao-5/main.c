#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");

    float calc_sem_cons, calc_sem_cons2, cal_com_cons, cal_com_cons2, cal_com_cons3;
    int consumo;    // declarando vari�veis;

    // 20 litros = 20000ml;

    // 30min = 50ml;
    // 1h = 100ml;
    // 10h = 1 litro;

    printf("\t\t========================================\n");
    printf("\t\t= Algoritmo calcular em quantos dias o =\n");
    printf("\t\t=         garraf�o se esvaziar�        =\n");
    printf("\t\t========================================\n\n");

    printf("\nHaver� consumo de �gua no garraf�o?\n");
    printf("0 - N�o\n");
    printf("1 - Sim\n");
    scanf("%d", &consumo); // guardando 'consumo' na mem�ria;

    if(consumo == 0) // se o 'consumo' for igual a 0;
    {
        system("cls");
        // 10h = 1 litro
        // xh = 20 litros
        calc_sem_cons = (10 * 20) / 1; // pela regra de tr�s o resultado ser� 200h;
        calc_sem_cons2 =  calc_sem_cons / 24; // dividindo o resultado por 24h/1 dia, o resultado ser� 8 dias;
        printf("\nSem consumo, o garraf�o de �gua se esvaziar� em %2.0f dias.\n\n\n", calc_sem_cons2);
    }
    else if(consumo == 1)   // se o 'consumo' for igual a 1;
    {
        system("cls");
        //caso haja consumo, por hora, no garraf�o sairia 100ml (de vazamento) + 300ml(de consumo) = 400ml/h = 0,4 litros/h;
        // 1h = 0,4 litros
        // 10h = x litros
        cal_com_cons = (10 * 0,4) / 1; // em 10h esvaziaria 4 litros do garraf�o;

        // 10h = 4 litros
        //  xh = 20 litros
        cal_com_cons2 = (10 * 20) / cal_com_cons; // o resultado ser� 50 horas;

        cal_com_cons3 = cal_com_cons2 / 24; // dividindo 50h por 24h/1 dia o resultado ser� 2 dias;
        printf("\nCom vazamento e consumo, o garraf�o se esvaziar� em %2.0f dias\n\n\n", cal_com_cons3);
    }
    else
    {
        printf("\nOp��o incorreta.\n\n\n");
    }


    system("pause");
}
