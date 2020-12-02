#include<stdio.h>

int main(){

    // Atribuição como uma expressão
    int a;
    //printf("%d\n", a = 10);

    // Operadores de atribuição composotos
    int b1 = 5, b2 = 10;
    int c1 = 5, c2 = 2;

    b1 *= b2; // b1 = b1 + b2 (b1 = 5 * 10)

    c1 = c1 * (c2 + 10);
    c1 *= c2 + 10; // c1 = c1 * (c2 + 10) -> c1 = 5 * (2 + 10)

    printf("b1 = %d\n", b1);
    printf("c1 = %d\n", c1);

    return 0;
}