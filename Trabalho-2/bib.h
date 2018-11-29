#define lang setlocale(LC_ALL,"Portuguese")
#define limpar fflush(stdin)

int cont=0;

void cadastAnimal(dados item[50]){


    printf("\n =======================");
    printf("\n | CADASTRO DE ANIMAIS |");
    printf("\n =======================\n\n");

    printf("Por favor, digite ...\n");
    item[cont].codigo = cont;
    printf("\nA ra�a: ");
    limpar;
    scanf("%s", item[cont].raca);
    printf("Data de entrada: ");
    limpar;
    scanf("%s", item[cont].dataEntrada);
    printf("Sexo (m ou f): ");
    limpar;
    scanf("%c", &item[cont].sexo);
    printf("Idade: ");
    scanf("%d", &item[cont].idade);
    cont++;
    system("cls");

    printf("Animal cadastrado com sucesso!\n");
}

void pesquisarRaca(dados item[50], char raca[30]){

    system("cls");

    int i, valid;
    int racaNencont=0; // Vari�vel 'raca n�o encontrada', se 0 == ra�a n�o encontrada

    printf("\nID \t%-20s\t%-10s\tSexo\tIdade\n", "Raca", "Entrada");

    for(i=0; i<cont; i++){
        valid = strcmp(item[i].raca, raca); // Se existir aminais com a ra�a que o usu�rio informou, a fun��o strcmp retornar� 0
        if(valid == 0){
            printf("%d\t%-20s\t%-10s\t%c\t%d\n", item[i].codigo, item[i].raca, item[i].dataEntrada, item[i].sexo,  item[i].idade);
            racaNencont=1; // A vari�vel 'raca n�o encontrada' passar� a ser 1 == ra�a encontrada
        }
    }

    printf("\n\n");

    if(racaNencont == 0){ // Se nenhuma ra�a for encontrada, exibir� a mensagem
        system("cls");
        printf("Ra�a n�o encontrada!\n\n");
    }

    system("pause");
    system("cls");
}

void pesquisarSexo(dados item[50], char sexo){

    system("cls");

    int i;

    printf("\nID \t%-20s\t%-10s\tSexo\tIdade\n", "Raca", "Entrada");

    for(i=0; i<cont; i++){
        if(sexo == item[i].sexo){
            printf("%d\t%-20s\t%-10s\t%c\t%d\n", item[i].codigo, item[i].raca, item[i].dataEntrada, item[i].sexo,  item[i].idade);
        }
    }

    printf("\n");
    system("pause");
    system("cls");
}

void totalAnimais(dados item[50], char sexo){

    int i, j=0;

    for(i=0; i<cont; i++){
        if(item[i].sexo == sexo){
            j++;
        }
    }

    system("cls");
    printf("Existem %d animais do sexo '%c' cadastrados.\n\n", j, sexo);
    system("pause");
}

void mediaAnimais(dados item[50], char sexo){

    int i, j=0;
    int tIdade=0;
    float media;

    for(i=0; i<cont; i++){
        if(sexo == item[i].sexo){
            tIdade += item[i].idade;
            j++;
        }
    }

    media = tIdade / j;

    system("cls");
    printf("\nA m�dia de idade dos aninais do sexo '%c' � de: %2.0f anos.\n\n",sexo , media);
    system("pause");
}

