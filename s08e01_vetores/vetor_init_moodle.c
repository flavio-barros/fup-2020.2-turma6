#include <stdio.h>

int main(){
    int vet_size = 0;
    scanf("%d", &vet_size); // Passo 1 -> lê o tamanho
    int vet[vet_size];      //Passo 2 -> criar o vetor

    for(int i = 0; i < vet_size; i++) 
        scanf("%d", &vet[i]);// Passo 3 -> le os valores

    printf("[ ");
    for(int i = 0; i < vet_size; i++)
        printf("%d ", vet[i]);
    printf("]\n");
}

/*
7
10 12 11 9 5 8 3
*/