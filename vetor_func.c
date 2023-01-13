/*

    Exemplo de vetores com argumentos de função

*/

#include <stdio.h>
#define TAMVET 5

// Exemplo com String

void substitui(char *str, int atual, int novo){
    int i;

    for (i=0;str[i]!='\0';i++)
        if(str[i] == atual)
            str[i] = novo;
}

int main (void){
    char texto [100] = "aula";

    printf("Original: [%s]\n", texto);
    substitui(texto, 'a', 'o');
    printf("Resultado [%s]\n", texto);
}

// Exemplo com float

int fposmax(float *vetor, int n);

int main(void){
    float vet[TAMVET];
    int i, pos;

    printf("Digite %d valores\n", TAMVET);
    for (i=0; i<TAMVET; i++){
        printf("%d> ", i);
        scanf("%f", &vet[i]);
    }
    pos = fposmax(vet, TAMVET);
    printf("O maior valor é %2.f e está no indice %d\n", vet[pos], pos);
    fflush(stdin); getchar();
    return 0;

}

/*

    Função fposmax = Encontra a posição do maior valor em um vetor float
    Parâmetros:
        vetor: endereço do primeiro elemento do vetor a ser pesquisado
        n: tamanho do vetor (número de elementos)
    Retorno: indice do maior valor.
        Se este valor está repetido, retorna o primeiro índice
*/

int fposmax(float *vetor, int n){
    int posmaior = 0, i;

    for (i=0; i<n; i++){
        if (vetor [i] > vetor[posmaior]){
            posmaior = i;
        }
    }
    return (posmaior);
}