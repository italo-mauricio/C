#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){


    struct cadastroUsuario
    {
        char nome [20];
        char cpf [20];
        int idade;
        char nascimento[20];


    };
    
    struct cadastroUsuario usuario, *ptr_usuario;

    ptr_usuario = &usuario;

    printf("\n ===================== Cadastro Usuario ======================== \n");
    printf("\n Digite o seu nome: ");
    scanf("%s", &ptr_usuario->nome );
    printf("\n Digite seu cpf: ");
    scanf("%s", &ptr_usuario->cpf);
    printF("\n Digite sua idade: ");
    scanf("%d", &ptr_usuario->idade);
    printF("\n Digite sua data de nascimento: ");
    scanf("%s", &ptr_usuario->nascimento);


    printf("\n ===================== Seus dados ========================= \n");
    printf("\n ---------------------------------------------------------- \n");

    return 0;
}
