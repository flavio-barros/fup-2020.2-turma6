#include<stdio.h>
/*
    Programa que lê duas notas, calcula a média e a escreve.
    E ainda:
    Se a média for maior ou igual a 7: Aprovado(a)
    Se a média for maior ou igual a 4 e menor que 7: Avaliação final
    Se a média for menor que 4: Reprovado(a)
*/
int main(){

    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Média: %.2f\n", media);

    if(media >= 7){
        printf("Situação: Aprovado(a)\n");
    }else if(media >= 4){
        printf("Situação: Avaliação Final\n");

        float af;

        printf("Digite a nota da AF: ");
        scanf("%f", &af);

        media = (media + af)/2;

        printf("Média final: %.2f\n", media);

        if (media >= 5){
            printf("Situação final: Aprovado(a)\n");
        }else{
            printf("Situação final: Reprovado(a)\n");
        }
    }else{
        printf("Situação: Reprovado(a)\n");
    }

    return 0;
}