## [cartas.c](cartas.c)

```c
#include <stdio.h> //puts
#include <stdlib.h>
#include <math.h>

//0 - copas, 1 - ouros, 2 - espadas, 3 - paus
static const char * pegar_naipe(int naipe){
    if(naipe == 0)
        return "copas";
    if(naipe == 1)
        return "ouros";
    if(naipe == 2)
        return "espadas";
    if(naipe == 3)
        return "paus";
    return "Erro";
}

//1 - As, 2. 11 - J, 12 - Q, 13 - K
static const char * pegar_nome(int valor){
    const char * nomes[] = {"","As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};    
    if(valor > 0 && valor < 14)
        return nomes[valor];
    
    return "erro";
}


int main(){

    int valor = 2;
    int naipe = 2;
    printf("%s de %s\n", pegar_nome(valor), pegar_naipe(naipe));//J de paus

    return 0;
}
```

---
## [conversoes.c](conversoes.c)

```c
#include <stdio.h> //puts

int main(){
    //conversoes validas
    int x = 5.4; //conversao
    float flo = 3; //conversoes
    int z = 'a'; //converte autotico pro asc1
    char c = 92; //converte usando asc

    //conversões forçadas: cast
    int x2 = (int) 4.5;
    float flo2 = (float) 3;


    return 0;
}
```

---
## [revisao.c](revisao.c)

```c
#include <stdio.h> //puts
#include <stdlib.h>
#include <math.h>

//0 - ninguem ganhou
//1 - jogador 1
//2 - jogador 2
//3 - jogador 3

//modo com return
int zerim_ou_um(int op1, int op2, int op3){
    if(op1 == op2 && op2 == op3)
        return 0;
    if(op1 != op2 && op2 == op3)
        return 1;
    if(op2 != op1 && op1 == op3)
        return 2;
    return 3; //return default
}

// modo com if else
int zerim_ou_um(int op1, int op2, int op3){
    int resultado = 0;
    if(op1 == op2 && op2 == op3)
        resultado = 0;
    else if(op1 != op2 && op2 == op3)
        resultado = 1;
    else if(op2 != op1 && op1 == op3)
        resultado = 2;
    else
        resultado = 3;
    return resultado;
}

//modo retornando texto
const char * zerim_ou_um(int op1, int op2, int op3){
    if(op1 == op2 && op2 == op3)
        return "Ninguem ganhou";
    if(op1 != op2 && op2 == op3)
        return "Jogador um";
    if(op2 != op1 && op1 == op3)
        return "Jogador dois";
    return "Jogador tres"; //return default
}
```

---
## [teste.c](teste.c)

```c
#include <stdio.h> 

const char * pegar_naipe (int naipe){
    if (naipe == 0 )
        return "copas"; 
    if (naipe == 1)
        return "ouros";
    if (naipe == 2)
        return "espadas";
    if (naipe == 3)
        return "paus";
    return "erro";
}

const char * pegar_nome (int valor) {
    if (valor == 1)
        return "As";
    if (valor == 11)
        return "Valete";
    if (valor == 12)
        return "Rainha";
    if (valor == 13)
        return "Rei";
    if (valor > 13)
        return "Numero de carta invalido";
    return "erro";
}

int main (){
    int valor = 11;
    int naipe = 2;
    printf("%s de %s", pegar_nome(valor), pegar_naipe(naipe));//J de paus
    return 0;
}
```

---
