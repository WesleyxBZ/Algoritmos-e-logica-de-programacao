#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");

    float calc_sem_cons, calc_sem_cons2, cal_com_cons, cal_com_cons2, cal_com_cons3;
    int consumo;    // declarando variáveis;

    // 20 litros = 20000ml;

    // 30min = 50ml;
    // 1h = 100ml;
    // 10h = 1 litro;

    printf("\t\t========================================\n");
    printf("\t\t= Algoritmo calcular em quantos dias o =\n");
    printf("\t\t=         garrafão se esvaziará        =\n");
    printf("\t\t========================================\n\n");

    printf("\nHaverá consumo de água no garrafão?\n");
    printf("0 - Não\n");
    printf("1 - Sim\n");
    scanf("%d", &consumo); // guardando 'consumo' na memória;

    if(consumo == 0) // se o 'consumo' for igual a 0;
    {
        system("cls");
        // 10h = 1 litro
        // xh = 20 litros
        calc_sem_cons = (10 * 20) / 1; // pela regra de três o resultado será 200h;
        calc_sem_cons2 =  calc_sem_cons / 24; // dividindo o resultado por 24h/1 dia, o resultado será 8 dias;
        printf("\nSem consumo, o garrafão de água se esvaziará em %2.0f dias.\n\n\n", calc_sem_cons2);
    }
    else if(consumo == 1)   // se o 'consumo' for igual a 1;
    {
        system("cls");
        //caso haja consumo, por hora, no garrafão sairia 100ml (de vazamento) + 300ml(de consumo) = 400ml/h = 0,4 litros/h;
        // 1h = 0,4 litros
        // 10h = x litros
        cal_com_cons = (10 * 0,4) / 1; // em 10h esvaziaria 4 litros do garrafão;

        // 10h = 4 litros
        //  xh = 20 litros
        cal_com_cons2 = (10 * 20) / cal_com_cons; // o resultado será 50 horas;

        cal_com_cons3 = cal_com_cons2 / 24; // dividindo 50h por 24h/1 dia o resultado será 2 dias;
        printf("\nCom vazamento e consumo, o garrafão se esvaziará em %2.0f dias\n\n\n", cal_com_cons3);
    }
    else
    {
        printf("\nOpção incorreta.\n\n\n");
    }


    system("pause");
}
