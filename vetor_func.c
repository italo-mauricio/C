/*

    Exemplo de vetores com argumentos de função

*/

#include <stdio.h>
#define TAMVET 5

// Exemplo com String

void substitui(char *str, int atual, int novo){
    int i;

    for (i=0;str[i]!='\0';i++)
        if(str[i] == atual)
            str[i] = novo;
}

int main (void){
    char texto [100] = "aula";

    printf("Original: [%s]\n", texto);
    substitui(texto, 'a', 'o');
    printf("Resultado [%s]\n", texto);
}

// Exemplo com 