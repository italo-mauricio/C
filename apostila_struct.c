#include<stdio.h>

struct data{
    int dia;
    int mes; 
    int ano;
};

int main(void){

    struct data d1={30, 7, 2003}, d2;

    printf("Data-exemplo: %02d/%02d/%04d\n", d1.dia, d1.mes, d1.ano);
    printf("Informe outra data: ");
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);
    if (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano)
        printf("Datas iguais\n");
    else
        printf("Datas diferentes\n");

    fflush(stdin);
    getchar();
    return 0;
    




}