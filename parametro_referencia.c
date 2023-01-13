#include <stdio.h>


void troca (int *p1, int *p2);

int main(void){
    int a, b;

    printf("A: "); scanf("%d", &a);
    printf("B: "), scanf("%d", &b);
    printf("Antes > A: %d   B: %d\n", a, b);
    troca(&a, &b);
    printf("Depois >  A: %d   B: %d\n", a, b);
    fflush(stdin); getchar();
    return 0;
}


void troca(int *p1, int *p2){

    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}