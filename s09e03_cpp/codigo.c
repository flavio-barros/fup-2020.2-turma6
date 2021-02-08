#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int x = 0;
    int vet[5] = {5, 4, 3, 2, 1};
    bool value = true;
    (void) value;//ele nao dar warning de nao utilizada
    (void) vet;

    scanf("%d", &x);
    printf("%d\n", x);

    char nome[50];
    scanf("%s", nome);
    strcat(nome, " eh lindao");
