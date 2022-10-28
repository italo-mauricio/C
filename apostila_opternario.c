#include <stdio.h>


int main(void){

    int n1, n2, maior;

    printf("Digite dois valores:\n");
    scanf("%d\n%d", &n1, &n2);
    maior = (n1>n2)?n1:n2;;
    printf("O maior eh' %d\n", maior);
    fflush(stdin);
    getchar();





    return 0;
}