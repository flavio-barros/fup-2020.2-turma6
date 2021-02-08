#include <stdio.h>
int main(){
    char c;
    int vet[1000];
    int size = 0;
    do{
        scanf("%d%c", &vet[size], &c);
        size += 1;
    }while(c != '\n');

    for(int i = 0; i < size; i++)
        printf("%d ", vet[i]);
    printf("\n");
}