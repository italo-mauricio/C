#include<stdio.h>

int main(void){

    int v=25, *p;

    p = &v;
    printf("%d %d\n", v, *p);
    *p = 50;
    printf("%d %d\n", v, *p);
    getchar();
    return 0;
}