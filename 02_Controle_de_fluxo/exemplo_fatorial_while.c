#include<stdio.h>

int main(){

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int resultado = 1, i = 1;

    /*
        Para n = 5

        i = 1; Verdadeiro; resultado = 1 * 1 = 1;
        i = 2; Verdadeiro; resultado = 1 * 2 = 2;
        i = 3; Verdadeiro; resultado = 2 * 3 = 6;
        i = 4; Verdadeiro; resultado = 6 * 4 = 24;
        i = 5; Verdadeiro; resultado = 24 * 5 = 120;
        i = 6; Falso. 
    */

    while(i <= n){
        resultado *= i;
        i++;
    }

    printf("Valor do fatorial de %d: %d\n", n, resultado);

    return 0;
}