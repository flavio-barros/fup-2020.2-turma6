#include<stdio.h>

void inverso(int n);
int palindromo(int n);

int main(){

    printf("%d\n", palindromo(741));

    return 0;
}

// Função que recebe um número inteiro e imprime os digitos do número na ordem
// inversa
// 1456 -> 6541
// 89547 -> 74598
// n = 745; digito = 745 % 10 = 5; n = 745/10 = 74
// n = 74; digito = 74 % 10 = 4; n = 74/10 = 7
// n = 7; digito = 7 % 10 = 7; n = 7/10 = 0
// n = 0
void inverso(int n){
    int digito;
    
    while(n > 0){
        digito = n%10;
        printf("%d", digito);
        n /= 10;
    }
    printf("\n");
}

// Função que recebe um número inteiro e testa se a representação é um palíndromo.
// E retorna 1 se for palíndromo, e 0 caso contrário
// 789 - 987 -> 0
// 14541 - 14541 -> 1
// n = 14541; digito = 14541 % 10 = 1; inverso = (0 * 10) + 1 = 1; n = 1454
// n = 1454; digito = 1454 % 10 = 4; inverso = (1 * 10) + 4 = 14; n = 145
// n = 145; digito = 145 % 10 = 5; inverso = (14 * 10) + 5 = 145; n = 14
// n = 14; digito = 14 % 10 = 4; inverso = (145 * 10) + 4 = 1454; n = 1
// n = 1; digito = 1 % 10 = 1; inverso = (1454 * 10) + 1 = 14541; n = 0
// n = 0;
int palindromo(int n){

    int digito, inverso = 0, n_original = n;

    while(n > 0){
        digito = n%10;
        inverso = (inverso * 10) + digito;
        n /= 10;
    }

    if(n_original == inverso){
        return 1;
    }else{
        return 0;
    }
}
