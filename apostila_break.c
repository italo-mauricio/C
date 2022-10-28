#include <stdio.h>


int main(void){

    int num, i=0, soma=0;

    printf("Digite valores entre 1 e 100 (0 para parar)\n");
    while(1){                      /*sempre verdadeiro*/
        printf("%d> ", i);
        scanf("%d", &num);
        if (num == 0)
            break;
        if(num <0 || num > 100){
            printf("Digite novamente...\n");
            continue;
        }
        soma+=num;
        i++;
    
    }

    printf("Soma dos valores informados = %d\n", soma);
    fflush(stdin);
    getchar();
    return 0;
}