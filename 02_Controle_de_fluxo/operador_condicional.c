#include<stdio.h>

int main(){

    int a, b, maximo;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite outro número inteiro: ");
    scanf("%d", &b);

    maximo = a > b ? a : b;

    printf("O maior valor digitado foi: %d\n", maximo);

    return 0;
}