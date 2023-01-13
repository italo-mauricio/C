#include <stdio.h>
#define TAM_VET 4


struct data{
    int dia, mes, ano;
};

struct aluno{
    int matricula;
    char nome[30];
    struct data nascimento;
};

int main(void){
    struct aluno turma[TAM_VET] = {
        {9991, "italo", {18,6,1998}},
        {9992, "pedro", {4,5,1997}},
        {9993, "afonso", {18,12,1995}},
        {9994, "pablo", {15,11,1995}}
    };
};

