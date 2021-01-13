#include<stdio.h>

int main(){

    int a;
    printf("Digite um número: ");
    scanf("%d", &a);

    if (a < 10 && a%2 == 0){
        printf("O número digitado é menor que 10\n");
        printf("O número digitado é par\n");
    }else if(a < 10 && a%2 == 1){
        printf("O número digitado é menor que 10\n");
        printf("O número digitado é impar\n");
    }else if(a > 10 && a%2 == 0){
        printf("O número digitado é maior que 10\n");
        printf("O número digitado é par\n");
    }else if(a > 10 && a%2 == 1){
        printf("O número digitado é maior que 10\n");
        printf("O número digitado é impar\n");
    }else{
        printf("O número digitado é igual a 10\n");
    }

    return 0;
}