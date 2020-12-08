#include<stdio.h>
/*
    Programa que lê n notas, calcula e escreve a média aritmética
*/
int main(){

    int n;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);

    int i = 0;
    float nota, media = 0;

    while(i < n){
        
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota);

        media += nota;

        i++;
    }

    media /= n;

    printf("Média aritmética: %.2f\n", media);

    return 0;
}