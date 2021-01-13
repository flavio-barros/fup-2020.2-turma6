#include<stdio.h>

int main(){

    int a = 2, b = 4, c = 6;

    // Operadores relacionais
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Operadores lógicos
    printf("(a < b) AND (a > b): %d\n", a < b && a > b);
    printf("(a < b) AND (a <= b): %d\n", a < b && a <= b);
    printf("(a < b) OR (a > b): %d\n", a < b || a > b);
    printf("(a > b) OR (a == b): %d\n", a > b || a == b);
    printf("NOT (a < b): %d\n", !(a < b));

    return 0;
}