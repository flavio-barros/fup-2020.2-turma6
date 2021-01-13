#include<stdio.h>

int main(){

    int a;
    float b, c;

    a = 3.5;        // a = 3
    b = a/2.0;      // b = 3.0/2.0 = 1.5
    c = 1/3 + b;    // c = 0 + 1.5

    printf("Valor de c: %f\n", c);

    // Operador módulo (%)
    printf("9 módulo 2 = %d\n", 9%2);

    return 0;
}