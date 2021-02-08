#include <stdio.h>

int main(){
    int x = 6;
    int vet[3];

    printf("x      mora em %p\n", &x); //endereço de x
    printf("vet    mora em %p\n", vet);
    printf("vet[0] mora em %p\n", &vet[0]);
    printf("vet[1] mora em %p\n", &vet[1]);
    printf("vet[2] mora em %p\n", &vet[2]);
    printf("vet[3] mora em %p\n", &vet[3]);
    printf("vet[4] mora em %p\n", &vet[4]);
    printf("vet[500] mora em %p\n", &vet[500]);


    for(int i = 0; i < 4; i++)
        vet[i] = 0;
}