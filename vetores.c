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


int i, achou, m;
char escolha;

do{
    printf("Matricula: ");
    scanf("%d", &m);
    achou = 0;
    for (i = 0; i < TAM_VET; i++){
        if (turma[i].matricula == m){
            printf("Nome: %s\n", turma[i].nome);
            printf("Nascimento: %02d/%02d/%04d\n",
                turma[i].nascimento.dia,
                turma[i].nascimento.mes,
                turma[i].nascimento.ano);
            achou = 1;
            break;
        }
    }
    if(achou == 0)
    printf("Matricula não encontrada!\n");
printf("\nContinuar? [S/N]: ");
scanf(" %c", &escolha);
}while(escolha == 's' || escolha == 'S');
return 0;
}


