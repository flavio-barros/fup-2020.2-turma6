
---
## [exemplo_funcoes.c](exemplo_funcoes.c)

```c
#include<stdio.h>

void inverso(int n);
int palindromo(int n);

int main(){

    printf("%d\n", palindromo(741));

    return 0;
}

// Função que recebe um número inteiro e imprime os digitos do número na ordem
// inversa
// 1456 -> 6541
// 89547 -> 74598
// n = 745; digito = 745 % 10 = 5; n = 745/10 = 74
// n = 74; digito = 74 % 10 = 4; n = 74/10 = 7
// n = 7; digito = 7 % 10 = 7; n = 7/10 = 0
// n = 0
void inverso(int n){
    int digito;
    
    while(n > 0){
        digito = n%10;
        printf("%d", digito);
        n /= 10;
    }
    printf("\n");
}

// Função que recebe um número inteiro e testa se a representação é um palíndromo.
// E retorna 1 se for palíndromo, e 0 caso contrário
// 789 - 987 -> 0
// 14541 - 14541 -> 1
// n = 14541; digito = 14541 % 10 = 1; inverso = (0 * 10) + 1 = 1; n = 1454
// n = 1454; digito = 1454 % 10 = 4; inverso = (1 * 10) + 4 = 14; n = 145
// n = 145; digito = 145 % 10 = 5; inverso = (14 * 10) + 5 = 145; n = 14
// n = 14; digito = 14 % 10 = 4; inverso = (145 * 10) + 4 = 1454; n = 1
// n = 1; digito = 1 % 10 = 1; inverso = (1454 * 10) + 1 = 14541; n = 0
// n = 0;
int palindromo(int n){

    int digito, inverso = 0, n_original = n;

    while(n > 0){
        digito = n%10;
        inverso = (inverso * 10) + digito;
        n /= 10;
    }

    if(n_original == inverso){
        return 1;
    }else{
        return 0;
    }
}
```


---
## [fatorial.c](fatorial.c)

```c
#include<stdio.h>

int fat(int);

int main(void){

    int n = 5;

    int r = fat(n);

    printf("Valor de %d! = %d\n", n, r);

    return 0;
}

int fat(int n){
    
    int f = 1;

    while(n > 0){
        f *= n;
        n--;
    }

    return f;
}
```


---
## [macros.c](macros.c)

```c
#include<stdio.h>

#define PI 3.1416F
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SOMA(a, b) ((a) + (b))

int main(){

    printf("Valor de PI: %.4f\n", PI + 10);
    printf("MAX = %d\n", MAX(15, 10));
    printf("SOMA = %d\n", SOMA(10*2, 5));
//  printf("SOMA = %d\n",  10*2 + 5);

    return 0;
}
```


---
## [primeira_funcao.c](primeira_funcao.c)

```c
#include<stdio.h>

float calcula_media(float, float, float);
void calcula_media2(void);

int main(void){

    float n1 = 5.5, n2 = 7.4, n3 = 8.3;

    float media = calcula_media(n1, n2, n3);

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
```


---
## [questao_2.c](questao_2.c)

```c
#include<stdio.h>

int soma_impares(int n);

int main(void){

    printf("%d\n", soma_impares(3));

    return 0;
}

int soma_impares(int n){
    int contador = 0, soma = 0, i = 1;

    while(contador < n){
        if(i%2 == 1){
            soma += i;
            contador++;
        }
        i++;
    }

    return soma;
    /*
    int soma = 0, contador = 0;
    for (int i = 1; contador < n; i+=2, contador++) {
        soma = soma + i;
    }
    return (soma);
    */
}
```


---
## [variavel_estatica.c](variavel_estatica.c)

```c
#include<stdio.h>

void exemplo(void);
void exemplo2(void);

int main(){

    exemplo();
    exemplo();
    exemplo();

    return 0;
}

void exemplo(void){
    static int contador = 0;

    contador++;
    printf("Número de vezes que a função 'exemplo' foi executada: %d\n", contador);
}

```


---
## [variavel_global.c](variavel_global.c)

```c
#include<stdio.h>

void soma10(void);
void soma20(void);

int cont = 0;

int main(void){

    printf("cont: %d\n", cont);
    soma10();
    soma10();
    printf("cont: %d\n", cont);
    soma20();
    soma20();
    printf("cont: %d\n", cont);

    return 0;
}

void soma10(void){
    cont += 10;
}

void soma20(void){
    cont += 20;
}
```

