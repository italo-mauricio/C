#include <stdio.h>


int main(void){

    int dividendo=10, divisor=3;
    float quocient=0.0;

    quocient = (float)dividendo / divisor;
    printf("%d/%d = %.2f\n", dividendo, divisor, quocient);
    getchar();


    // o operador de moldagem basicamente ao colocar a expressão entre parenteses
    // a esquerda, ele força a expressão a assumir o tipo indicado, convertendo automaticamente.

    return 0;

}