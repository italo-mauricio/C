#include<stdio.h>
#define TAM_VET 4


struct data{
    int dia, mes, ano;
};

struct aluno{
    int matricula;
    char nome [30];
    struct data nascimento;
};

int main(void)
{

    struct aluno turma[TAM_VET] = {
        {9991, "aluno 1", {10, 5, 1982}},
        {9992, "aluno 2", {23, 8, 1983}},
        {9993, "aluno 3", {14, 1, 1981}},
        {9994, "aluno 4", {2, 10, 1983}}

    };

    int i, achou, m;
    char escolha;

    do{

        printf("Matricula: ");
        scanf("%d", &m);
        achou = 0;
        for (i=0; i < TAM_VET; i++)
            if(turma[i].matricula == m){
                printf("Nome: %s\n", turma[i].nome);
                printf("Nascimento: %02d/%02d/%04d\n",
                        turma[i].nascimento.dia,
                        turma[i].nascimento.mes,
                        turma[i].nascimento.ano);
                    achou = 1;
                    break;
                 if (achou == 0)
                    printf("Nnao encontrou\n");
                printf("\nContinuar? [S/N]: ");
                scanf(" %c", &escolha);
   
            }
        }while(escolha == 'S' || escolha == 's');
    return 0;
       




}