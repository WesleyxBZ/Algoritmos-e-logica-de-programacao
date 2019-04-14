#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

struct dadosAnimais{
    int codigo;
    char raca[30];
    char dataEntrada[11];
    char sexo;
    int idade;
};
typedef struct dadosAnimais dados;

#endif // STRUCT_H_INCLUDED
