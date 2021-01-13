## [comando_do-while.c](comando_do-while.c)

```c
#include<stdio.h>

int main(){

    int n;

    do{
        printf("Digite um número entre 0 e 10: ");
        scanf("%d", &n);
    }while(n < 0 || n > 10);

    printf("Valor de n: %d\n", n);

    return 0;
}
```

---
## [comando_for.c](comando_for.c)

```c
#include<stdio.h>

int main(){
    
    for(int i=0; i<10; i++){
        printf("%d\n", i);
    }

    int i = 0;
    while(i < 10){
        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

---
## [comando_if.c](comando_if.c)

```c
#include<stdio.h>

int main(){

    int a;
    printf("Digite um número: ");
    scanf("%d", &a);

    if (a < 10 && a%2 == 0){
        printf("O número digitado é menor que 10\n");
        printf("O número digitado é par\n");
    }else if(a < 10 && a%2 == 1){
        printf("O número digitado é menor que 10\n");
        printf("O número digitado é impar\n");
    }else if(a > 10 && a%2 == 0){
        printf("O número digitado é maior que 10\n");
        printf("O número digitado é par\n");
    }else if(a > 10 && a%2 == 1){
        printf("O número digitado é maior que 10\n");
        printf("O número digitado é impar\n");
    }else{
        printf("O número digitado é igual a 10\n");
    }

    return 0;
}
```

---
## [comando_while.c](comando_while.c)

```c
#include<stdio.h>

int main(){

    int a = 20;

    while(a > 20){
        printf("valor de a: %d\n", a);
        a--;
    }

    return 0;
}
```

---
## [comandos_break_continue.c](comandos_break_continue.c)

```c
#include<stdio.h>

int main(){

    for(int i=0; i < 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
```

---
## [exemplo_fatorial_while.c](exemplo_fatorial_while.c)

```c
#include<stdio.h>

int main(){

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    int resultado = 1, i = 1;

    /*
        Para n = 5

        i = 1; Verdadeiro; resultado = 1 * 1 = 1;
        i = 2; Verdadeiro; resultado = 1 * 2 = 2;
        i = 3; Verdadeiro; resultado = 2 * 3 = 6;
        i = 4; Verdadeiro; resultado = 6 * 4 = 24;
        i = 5; Verdadeiro; resultado = 24 * 5 = 120;
        i = 6; Falso. 
    */

    while(i <= n){
        resultado *= i;
        i++;
    }

    printf("Valor do fatorial de %d: %d\n", n, resultado);

    return 0;
}
```

---
## [exemplo_media_n_notas.c](exemplo_media_n_notas.c)

```c
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
```

---
## [exemplo_media_ponderada_n_notas.c](exemplo_media_ponderada_n_notas.c)

```c
#include<stdio.h>
/*
    Programa que lê n notas e n pesos, calcula e escreve a média ponderada.
*/
int main(){
    
    

    return 0;
}
```

---
## [exemplo_media_resultado.c](exemplo_media_resultado.c)

```c
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
```

---
## [exemplo_numero_perfeito.c](exemplo_numero_perfeito.c)

```c
#include<stdio.h>
/*
    Número perfeito é um número que a soma dos seus divisores é igual a ele.

    Programa que recebe um número inteiro e determina se esse número é perfeito
    ou não.

    Exemplo: 6
    6/1 = 6
    6/2 = 3
    6/3 = 2
    6 = 1 + 2 + 3
*/
int main(){

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    int soma = 0;

    /*
        Exemplo: n = 6
        i = 1; Verdadeiro; Verdadeiro; soma = 0 + 1
        i = 2; Verdadeiro; Verdadeiro; soma = 1 + 2
        i = 3; Verdadeiro; Verdadeiro; soma = 3 + 3
        i = 4; Verdadeiro; Falso
        i = 5; Verdadeiro; Falso
        i = 6; Falso.

        Soma = 6

    */
   
    for(int i=1; i<n; i++){
        if(n%i == 0){
            soma += i;
        }
    }

    if(soma == n){
        printf("%d é um número perfeito!\n", n);
    }else{
        printf("%d não é um número perfeito!\n", n);
    }

    return 0;
}
```

---
## [exemplo_temperatura.c](exemplo_temperatura.c)

```c
#include<stdio.h>
/*
    Programa que lê uma temperatura em Fahrenheit, converte pra Celsius
    e escreve o valor da temperatura.

    C = (F-32) / 1,8

    E ainda:
    Se a temperatura for menor que 10: "Temperatura muito fria"
    Se a temperatura for maior ou igual a 10 e menor que 20: "Temperatura fria"
    Se for maior ou igual a 20 e menor 30: "Temperatura agradável"
    Se for maior ou igual a 30 e menor que 35: "Temperatura quente"
    Se for maior ou igual 35: "Temperatura muito quente"
*/
int main(){

    return 0;
}
```

---
## [operador_condicional.c](operador_condicional.c)

```c
#include<stdio.h>

int main(){

    int a, b, maximo;

    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    printf("Digite outro número inteiro: ");
    scanf("%d", &b);

    maximo = a > b ? a : b;

    printf("O maior valor digitado foi: %d\n", maximo);

    return 0;
}
```

---
