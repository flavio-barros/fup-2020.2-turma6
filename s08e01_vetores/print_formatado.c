#include <stdio.h>

void print_vet(int vet[], int size){
    printf("[");
    for(int i = 0; i < size; i++){
        printf(i == 0 ? "" : ", ");
        printf("%d", vet[i]);
    }
    printf("]\n");
}

int main(){
    int vet[] = {4, 5, 2, 8, 9, 1};
    int size = sizeof(vet) / sizeof(int);
    printf("%d\n", size);

    print_vet(vet, size);
}