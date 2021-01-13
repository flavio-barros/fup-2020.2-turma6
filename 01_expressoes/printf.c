#include<stdio.h>

int main(){

    int a = 10;
    float b = 2.5;
    double c = 5.5;
    char e = 'B';

    printf("Valor da variável a: %10d\nValor da variável b: %10.1f\n", a, b);
    printf("Valor da variável c: %.2f\nValor da variável e: %c\n", c, e);

    return 0;
}