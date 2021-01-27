#include <stdio.h>
int procurar_escolhido(int vet[], int size, int value){
    for(int i = 0; i < size; i++)
        if(vet[i] == value || vet[i] == -value)
            return i;
    return -1;
}

void inverter_proximos(int vet[], int size, int escolhido){
    int pos = procurar_escolhido(vet, size, escolhido);
    if(pos == -1)
        return;
    if(pos != 0)
        vet[pos - 1] *= -1;
    if(pos != size - 1)
        vet[pos + 1] *= -1;
}

void print_vet(int vet[], int size){
    printf("[");
    for(int i = 0; i < size; i++){
        if(i != 0)
            printf(" ");
        printf("%d", vet[i]);
    }
    puts("]");
}

void fazer_problema(){
    int size = 0, escolhido = 0;
    scanf("%d %d", &size, &escolhido);
    int vet[size];
    for(int i = 0; i < size; i++)
        scanf("%d", &vet[i]);
    inverter_proximos(vet, size, escolhido);
    print_vet(vet, size);
}

int main(){
    int qtd = 0;
    scanf("%d", &qtd);
    while(qtd--)
        fazer_problema();
}

/*
1
5 3
1 2 3 4 5
*/