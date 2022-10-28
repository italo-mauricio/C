#include<stdio.h>


int main(void){

    int n, i, pot=1;

    printf("Informe um numero positivo: ");
    scanf("%d", &n);
    i=n;
    while(i>0){
        pot*=2;
        i--;
    }
    printf("2 elevado ao expoente %d = %d\n",n,pot);
    fflush(stdin);
    getchar();
    




    return 0;
}