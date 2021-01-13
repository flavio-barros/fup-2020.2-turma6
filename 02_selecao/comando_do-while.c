#include<stdio.h>

int main(){

    int n;

    do{
        printf("Digite um número entre 0 e 10: ");
        scanf("%d", &n);
    }while(n < 0 || n > 10);

    printf("Valor de n: %d\n", n);

    return 0;
}