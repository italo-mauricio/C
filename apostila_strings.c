#include <stdio.h>
#include <stdlib.h>



int main(void){

    char letra = 'A';
    int num = 15;
    double dv = 13.71;
    char curso [] = "SISTEMAS";

    printf("[%c]\n", curso[1]);
    printf("[%c]  [%d]\n", letra, letra);
    printf("[%d] [%o] [%x]\n", num, num, num);
    printf("[%5d] [%05d] [%-5d]\n", num, num, num);
    printf("[%7.1f]\n", dv);
    printf("[%.3f]\n", dv);
    printf("[%-7.1f]\n", dv);
    printf("[%15s]\n", curso);
    printf("[%15.4s]\n", curso);
    printf("[%-15.4s]\n", curso);
    getchar();
    return 0;



}