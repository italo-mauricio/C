#include <stdio.h>



int main(void)
{
    char nome [100];

    printf("Digite seu nome: ");
    gets(nome);
    printf("O seu nome eh \"%s\"\n", nome);
    printf("A primeira letra eh \'%c\'\n", nome [0]);
    getchar();
    return 0;


    // Função Gets vai ser melhor quando for usar nomes, pois o %s não aceita espaços em branco.



}