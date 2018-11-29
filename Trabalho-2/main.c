#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "struct.h"
#include "bib.h"

#define lang setlocale(LC_ALL,"Portuguese")
#define limpar fflush(stdin)

/*
    Desenvolver um algoritmo para gerenciar os animais de um zoológico. Para cada animal
    deve-se guardar seu código identificador, raça, data de entrada, sexo e idade. O zoológico
    não deve permitir mais de um animal com o mesmo código identificador. O programa
    deve permitir cadastrar novos animais, pesquisar por raça ou sexo. Além disso, apresentar
    estatísticas dos já cadastrados: número de animais de determinado sexo (informado pelo
    usuário) e qual a média de idade deles. O programa deve apresentar o seguinte menu:
    1. Cadastrar animal
    2. Pesquisar
    3. Estatísticas
    4. Sair
    Caso o usuário selecione a opção “2”, o sistema deve mostrar outro menu com as opções:
    2.1. Pesquisar por raça
    2.2. Pesquisar por sexo
    Caso o usuário selecione a opção “3”, o sistema deve mostrar as seguintes opções:
    3.1. Apresentar total de animais por sexo
    3.2. Apresentar a média de idade de animais por sexo
    Cada uma das opções do menu e sub-menus devem ser desenvolvidas através de funções.
    Para as opções “2” e “3”a raça e sexo devem ser passados por parâmetro para as funções.
*/

void menu(dados item[50]){

    int opc=0; // Vari�vel de 'op��o'
    int animCadast=0; // Vari�vel 'animais cadastrados', se == 0, nenhum animal cadastrado

    do{
        printf("\n ==============");
        printf("\n |    MENU    |");
        printf("\n ==============\n\n");

        printf("1 - Cadastrar animal");
        printf("\n2 - Pesquisar");
        printf("\n3 - Estat�sticas");
        printf("\n4 - Sair");
        printf("\n\nDigite uma op��o: ");
        scanf("%d", &opc);


        if(opc == 1){ // Op��o 1 inicia fun��o cadastrar animais
            system("cls");
            cadastAnimal(item);
            animCadast = 1; // Altera o valor da vari�vel animais cadastrados para 1 == a h� animais cadastrados
        }

        if(animCadast == 0){ // Se 'animais cadastrados' == 0, nenhum animal cadastrado, informar� a mensagem ao usu�rio
            system("cls");
            printf("Nenhum animal cadastrado!\n");
        }

        if(animCadast == 1){ // Se houver animais cadastrados, as op��es 2 e 3 poder�o ser executadas
            if(opc == 2){
                subMenuPesquisar(item);
            }
            if(opc == 3){
                subMenuEstatis(item);
            }
        }

        if(opc > 4 || opc < 1){ // Se o usu�rio digitar um n�mero diferente das op��es existentes, o programa informar� uma mensagem
            system("cls");
            printf("Digite uma op��o v�lida!\n");
        }

    }while(opc != 4); // Enquando a vari�vel op��o for diferente de 4, o programa continua a executar
}

void subMenuPesquisar(dados item[50]){

    int opc=0;
    char raca[30];
    char sexo;

    system("cls");
    printf("\n ===========================");
    printf("\n |    SUB MENU PESQUISAR   |");
    printf("\n ===========================\n");

    printf("\n1 - Pesquisar por ra�a");
    printf("\n2 - Pesquisar por sexo");
    printf("\n\nDigite uma op��o: ");
    scanf("%d", &opc);

    if(opc == 1){
        printf("\nDigite uma ra�a: ");
        limpar;
        gets(raca);
        pesquisarRaca(item, raca);
    }
    if(opc == 2){
        printf("\nDigite um sexo (m ou f): ");
        limpar;
        scanf("%c", &sexo);
        pesquisarSexo(item, sexo);
    }
}

void subMenuEstatis(dados item[50]){

    int opc=0;
    char sexo;

    system("cls");
    printf("\n ==============================");
    printf("\n |    SUB MENU ESTAT�STICAS   |");
    printf("\n ==============================\n");

    printf("\n1 - Apresentar total de animais por sexo");
    printf("\n2 - Apresentar a m�dia de idade de animais por sexo");
    printf("\n\nDigite uma op��o: ");
    scanf("%d", &opc);

    if(opc == 1){
        printf("\nDigite o sexo (m ou f): ");
        limpar;
        scanf("%c", &sexo);
        totalAnimais(item, sexo);
        system("cls");
    }
    if(opc == 2){
        printf("\nDigite o sexo (m ou f): ");
        limpar;
        scanf("%c", &sexo);
        mediaAnimais(item, sexo);
        system("cls");
    }
}

int main()
{
    lang;

    dados item[50];

    menu(item);
}
