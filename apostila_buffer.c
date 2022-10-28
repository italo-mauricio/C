#include <stdio.h>
#include <stdlib.h>



int main(void){


    int dia, mes, ano;
    float temp, far;

    printf("Informe a temperatura (Celsius): ");
    scanf("%f", &temp);
    printf("Informe a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    far = (9.0 / 5.0 * temp + 32.0);
    printf("Em %02d/%02d/%04d a temperatura foi %.1f (Fahrenheit)\n", dia, mes, ano, far);
    fflush(stdin);
    getchar();
    return 0;








}