#include <stdio.h>
#include <stdbool.h>


// 1 1 2 3 5 8
int main(){
    int vet[1000] = {1, 1}; //capacidade eh 1000
    int size = 2;
    int valor_max = 0;
    int soma = 0;
    scanf("%d", &valor_max);
    while(true){
        vet[size] = vet[size - 1] + vet[size - 2];
        if(vet[size] > valor_max)
            break;
        soma += vet[size] % 2 == 0 ? vet[size] : 0;
        size += 1;
    }
    printf("%d\n", soma);
}