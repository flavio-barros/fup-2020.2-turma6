#include<stdio.h>

int soma_impares(int n);

int main(void){

    printf("%d\n", soma_impares(3));

    return 0;
}

int soma_impares(int n){
    int contador = 0, soma = 0, i = 1;

    while(contador < n){
        if(i%2 == 1){
            soma += i;
            contador++;
        }
        i++;
    }

    return soma;
    /*
    int soma = 0, contador = 0;
    for (int i = 1; contador < n; i+=2, contador++) {
        soma = soma + i;
    }
    return (soma);
    */
}