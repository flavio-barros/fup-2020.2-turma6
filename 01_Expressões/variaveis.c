#include<stdio.h>

int main(){

    int a = -10, a1 = 2, a2, a3;
    short b = 3.14;
    long c;
    float d;
    double e;
    char f;

    // Imprimindo o tamanho das variáveis
    printf("Tamanho do tipo char: %ld\n", sizeof(f));
    printf("Tamanho do tipo short: %ld\n", sizeof(b));
    printf("Tamanho do tipo int: %ld\n", sizeof(a));
    printf("Tamanho do tipo long: %ld\n", sizeof(c));
    printf("Tamanho do tipo float: %ld\n", sizeof(d));
    printf("Tamanho do tipo double: %ld\n\n", sizeof(e));

    // Imprimindo os valores das variáveis
    printf("Valor da variável a: %d\n", a);
    printf("Valor da variável a1: %d\n", a1);
    a = 5;
    printf("Valor da variável a: %d\n\n", a);

    // Imprimindo variáveis com valores indefinidos
    printf("Valor da variável b: %d\n", b);
    printf("Valor da variável c: %ld\n", c);

    return 0;
}