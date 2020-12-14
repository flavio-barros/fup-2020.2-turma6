#include<stdio.h>

float calcula_media(float, float, float);
void calcula_media2(void);

int main(void){

    float media = calcula_media(8.5, 7.25, 4.5);

    printf("Média: %.2f\n", media);

    media = calcula_media(4, 5.75, 8);

    printf("Média: %.2f\n", media);

    calcula_media2();

    return 0;
}

float calcula_media(float nota1, float nota2, float nota3){
    float media;

    media = (nota1 + nota2 + nota3) / 3;

    return media;
}

void calcula_media2(void){
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = calcula_media(n1, n2, n3);

    printf("Média: %.2f\n", media);
}