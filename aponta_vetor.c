#include <stdio.h>

int main(void){
    char texto[100], *p;
    int i;

    printf("Digite algo: ");
    gets(texto);
    p = texto;
    printf("Um caracter por linha:\n");
    for (i=0 ; p[i] != '\0'; i++)
        printf("%c\n", p[i]);

    getchar();
    return 0;
}