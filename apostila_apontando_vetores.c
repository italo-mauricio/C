#include <stdio.h>


int main(void){

    char txt[100], *p;
    int i;

    printf("Digite algo: ");
    gets(txt);
    p=txt;
    printf("Um caracter por linha: \n");
    for (i=0; p[i]!='\0'; i++)
        printf("%c\n", p[i]);

    return 0;







}