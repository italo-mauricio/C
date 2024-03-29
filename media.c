#include <stdio.h>
#include <stdlib.h>

float ler_nota(void);
float calcula_media(float p1, float p2, float p3, float p4);
void exibe_resultado(float med);
void pausa(void);


int main(void)
{
    float n1, n2, n3, n4, med;
    printf("Digite a sua primeira nota: "); n1 = ler_nota();
    printf("Digite a sua segunda nota: "); n2 = ler_nota();
    printf("Digite a sua terceira nota: "); n3 = ler_nota();
    printf("Digite a sua quarta nota: "); n4 = ler_nota();
    med = calcula_media(n1, n2, n3, n4);
    exibe_resultado(med);
    pausa();


    return 0;

}

float ler_nota(void)
{
    float n;
    do
    {
        scanf("%f", &n);
        if (n < 0.0 || n > 10.0)
            printf("Inválido! redigite...");
    } while (n < 0.0 || n > 10.0);
    
    return n;
}

float calcula_media(float p1, float p2, float p3, float p4)
{
    float res;
    res = (p1 + p2 + p3 + p4) / 4.0;
    res = ((int) (res * 10)) / 10.0;
    return res;
}

void exibe_resultado(float med)
{
    printf("Media: %.1f: ", med);
    if (med < 3.0)
        printf("Aluno reprovado\n");
    else if (med > 3.0 && med < 5.0)
        printf("Aluno em exame");
    else if (med >= 5.0)
        printf("Aluno aprovado\n");

}

void pausa()
{
    fflush(stdin);
    getchar();
}
