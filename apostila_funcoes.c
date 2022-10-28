#include<stdio.h>
#include<stdlib.h>

float ler_nota(void);
float calcula_media(float p1, float p2);
void exibe_resultado(float med);
void pausa(void);


int main(void){

    float n1, n2, med;
    printf("Primeira prova: "); n1 = ler_nota();
    printf("Segunda prova : "); n2 = ler_nota();
    med = calcula_media(n1, n2);
    exibe_resultado(med);
    pausa();
    return 0;
}

float ler_nota(void){

    float n;
    do
    {
        scanf("%f", &n);
        if (n <0.0 || n > 10.0)
            printf("Invalido, digite novamente...: ");
    } while (n < 0.0 || n > 10.10);

    return n;
    
}

float calcula_media(float p1, float p2){

    float res;
    res = (p1 + p2) / 2.0;           /* mesmo peso nas duas provas */
    res = ((int) (res*10)) / 10.0;  /* trunca para a casa decimal*/
    return res;

}

void exibe_resultado(float med){

    printf("Media %.1f: ", med);
    if (med < 3.0)
        printf("Voce foi reprovado\n");
    else if(med >= 3.0 && med < 7.0)
        printf("Voce em recuperacao\n");
    else if(med >= 7.0)
        printf("Aluno aprovado\n");
}

void pausa(void){

    fflush(stdin);
    getchar();
}

