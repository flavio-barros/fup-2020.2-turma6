## [exemplo_media_aritmetica.c](exemplo_media_aritmetica.c)

```c
#include<stdio.h>
/*
    Programa que lê três notas de um aluno, calcula e escreve a
    média aritmética desse aluno
*/
int main(){

    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/3;

    printf("Média aritmética: %.2f\n", media);

    return 0;
}
```

---
## [exemplo_media_ponderada.c](exemplo_media_ponderada.c)

```c
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
```

---
## [operadores_aritmeticos.c](operadores_aritmeticos.c)

```c
#include<stdio.h>

int main(){

    int a;
    float b, c;

    a = 3.5;        // a = 3
    b = a/2.0;      // b = 3.0/2.0 = 1.5
    c = 1/3 + b;    // c = 0 + 1.5

    printf("Valor de c: %f\n", c);

    // Operador módulo (%)
    printf("9 módulo 2 = %d\n", 9%2);

    return 0;
}
```

---
## [operadores_atribuicao.c](operadores_atribuicao.c)

```c
#include<stdio.h>

int main(){

    // Atribuição como uma expressão
    int a;
    //printf("%d\n", a = 10);

    // Operadores de atribuição composotos
    int b1 = 5, b2 = 10;
    int c1 = 5, c2 = 2;

    b1 *= b2; // b1 = b1 + b2 (b1 = 5 * 10)

    c1 = c1 * (c2 + 10);
    c1 *= c2 + 10; // c1 = c1 * (c2 + 10) -> c1 = 5 * (2 + 10)

    printf("b1 = %d\n", b1);
    printf("c1 = %d\n", c1);

    return 0;
}
```

---
## [operadores_incremento_decremento.c](operadores_incremento_decremento.c)

```c
#include<stdio.h>

int main(){

    int a = 5, b;
    b = a++ * 2; // b = 5 * 2; a = 6;

    a = 5;
    b = ++a * 2; // a = 6; b = 6 * 2;

    printf("%d %d\n", b, a);

    return 0;
}
```

---
## [operadores_relacionais.c](operadores_relacionais.c)

```c
#include<stdio.h>

int main(){

    int a = 2, b = 4, c = 6;

    // Operadores relacionais
    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Operadores lógicos
    printf("(a < b) AND (a > b): %d\n", a < b && a > b);
    printf("(a < b) AND (a <= b): %d\n", a < b && a <= b);
    printf("(a < b) OR (a > b): %d\n", a < b || a > b);
    printf("(a > b) OR (a == b): %d\n", a > b || a == b);
    printf("NOT (a < b): %d\n", !(a < b));

    return 0;
}
```

---
## [printf.c](printf.c)

```c
#include<stdio.h>

int main(){

    int a = 10;
    float b = 2.5;
    double c = 5.5;
    char e = 'B';

    printf("Valor da variável a: %10d\nValor da variável b: %10.1f\n", a, b);
    printf("Valor da variável c: %.2f\nValor da variável e: %c\n", c, e);

    return 0;
}
```

---
## [scanf.c](scanf.c)

```c
#include<stdio.h>

int main(){

    int a;
    float b;

    scanf("%d %f", &a, &b);

    printf("Valor lido: %d\nOutro valor lido: %.2f\n", a, b);

    return 0;
}
```

---
## [variaveis.c](variaveis.c)

```c
#include<stdio.h>

int main(){

    int a = -10, a1 = 2, a2, a3;
    short b = 3.14;
    long c;
    float d;
    double e;
    char f;

    // Imprimindo o tamanho das variáveis
    printf("Tamanho do tipo char: %ld\n", sizeof(f));
    printf("Tamanho do tipo short: %ld\n", sizeof(b));
    printf("Tamanho do tipo int: %ld\n", sizeof(a));
    printf("Tamanho do tipo long: %ld\n", sizeof(c));
    printf("Tamanho do tipo float: %ld\n", sizeof(d));
    printf("Tamanho do tipo double: %ld\n\n", sizeof(e));

    // Imprimindo os valores das variáveis
    printf("Valor da variável a: %d\n", a);
    printf("Valor da variável a1: %d\n", a1);
    a = 5;
    printf("Valor da variável a: %d\n\n", a);

    // Imprimindo variáveis com valores indefinidos
    printf("Valor da variável b: %d\n", b);
    printf("Valor da variável c: %ld\n", c);

    return 0;
}
```

---
