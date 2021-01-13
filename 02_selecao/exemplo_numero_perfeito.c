#include<stdio.h>
/*
    Número perfeito é um número que a soma dos seus divisores é igual a ele.

    Programa que recebe um número inteiro e determina se esse número é perfeito
    ou não.

    Exemplo: 6
    6/1 = 6
    6/2 = 3
    6/3 = 2
    6 = 1 + 2 + 3
*/
int main(){

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int soma = 0;

    /*
        Exemplo: n = 6
        i = 1; Verdadeiro; Verdadeiro; soma = 0 + 1
        i = 2; Verdadeiro; Verdadeiro; soma = 1 + 2
        i = 3; Verdadeiro; Verdadeiro; soma = 3 + 3
        i = 4; Verdadeiro; Falso
        i = 5; Verdadeiro; Falso
        i = 6; Falso.

        Soma = 6

    */
   
    for(int i=1; i<n; i++){
        if(n%i == 0){
            soma += i;
        }
    }

    if(soma == n){
        printf("%d é um número perfeito!\n", n);
    }else{
        printf("%d não é um número perfeito!\n", n);
    }

    return 0;
}