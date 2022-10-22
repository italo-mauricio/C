// utilizando struct e ponteiros
// ler e exibir informações de um estudante
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    struct estudante
    {
        int nMatricula;
        char nome[30];
        float vMensalidade;
        char dataBacharel [30];

    };
    
    // declaração da variável do tipo struct e declara variavel do tipo ponteiro struct estudante
    struct estudante stud1, *ptr_stud1;

    // leitura de dados do usuário

    ptr_stud1 = &stud1;

    printf("\n Digite sua matricula: ");
    scanf("%d", &ptr_stud1->nMatricula);
    printf("\n Digite seu nome: ");
    scanf("%s", &ptr_stud1->nome);
    printf("\n Digite sua mensalidade: ");
    scanf("%f", &ptr_stud1->vMensalidade);
    printf("\n Digite a data: ");
    scanf("%s", &ptr_stud1->dataBacharel);

    printf("\n ============= Cadastro do Estudante da UFRN ============== ");
    printf("\n Numero matricula = %d", ptr_stud1->nMatricula);
    printf("\n Nome do aluno = %s", ptr_stud1->nome);
    printf("\n Mensalidade = %9.2f", ptr_stud1->vMensalidade);
    printf("\n Data = %s", ptr_stud1->dataBacharel);



    return 0;
}


