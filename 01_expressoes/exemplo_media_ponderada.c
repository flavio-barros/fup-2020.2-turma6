#include<stdio.h>
/*
    Programa que lê três notas e o peso de cada nota, calcula e
    escreve o valor da média ponderada

    Exemplo:
    Notas: 7 8 9
    Pesos: 2 4 3

    MP = (7x2 + 8x4 + 9x3)/(2 + 4 + 3)
*/
int main(){

    float n1, n2, n3, media;

    int p1, p2, p3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite o peso da primeira nota: ");
    scanf("%d", &p1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite o peso da segunda nota: ");
    scanf("%d", &p2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite o peso da terceira nota: ");
    scanf("%d", &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3)/(p1+p2+p3);

    printf("O valor da média ponderada é: %f\n", media);

    return 0;
}