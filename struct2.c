#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){


    struct cadastroUsuario
    {
        char nome [30];
        char cpf [30];
        int idade;
        char nascimento[30];


    };
    
    struct cadastroUsuario usuario, *ptr_usuario;

    ptr_usuario = &usuario;

    printf("\n ===================== Cadastro Usuario ======================== \n");
    printf("\n Digite o seu nome: ");
    scanf("%s", &ptr_usuario->nome);
    printf("\n Digite seu cpf: ");
    scanf("%s", &ptr_usuario->cpf);
    printf("\n Digite sua idade: ");
    scanf("%d", &ptr_usuario->idade);
    printf("\n Digite sua data de nascimento: ");
    scanf("%s", &ptr_usuario->nascimento);


    printf("\n ===================== Seus dados ========================= \n");
    printf("\n ---------------------------------------------------------- \n");
    printf("\n Nome do usuario: %s", ptr_usuario->nome);
    printf("\n CPF do usuario: %s", ptr_usuario->cpf);
    printf("\n Idade do usuario: %d", ptr_usuario->idade);
    printf("\n Data de nascimento: %s", ptr_usuario->nascimento);
    printf("\n ---------------------------------------------------------- \n");
    printf("\n ========================================================== \n");
    system("\n Pause");
    system("cls");

    return 0;
}
