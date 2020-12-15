#include<stdio.h>

void exemplo(void);
void exemplo2(void);

int main(){

    exemplo();
    exemplo();
    exemplo();

    return 0;
}

void exemplo(void){
    static int contador = 0;

    contador++;
    printf("Número de vezes que a função 'exemplo' foi executada: %d\n", contador);
}

