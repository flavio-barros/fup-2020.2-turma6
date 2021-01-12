#include <stdio.h> //puts
#include <stdlib.h>
#include <math.h>

//0 - ninguem ganhou
//1 - jogador 1
//2 - jogador 2
//3 - jogador 3
// int zerim_ou_um(int op1, int op2, int op3){
//     if(op1 == op2 && op2 == op3)
//         return 0;
//     if(op1 != op2 && op2 == op3)
//         return 1;
//     if(op2 != op1 && op1 == op3)
//         return 2;
//     return 3; //return default
// }

// int zerim_ou_um(int op1, int op2, int op3){
//     int resultado = 0;
//     if(op1 == op2 && op2 == op3)
//         resultado = 0;
//     else if(op1 != op2 && op2 == op3)
//         resultado = 1;
//     else if(op2 != op1 && op1 == op3)
//         resultado = 2;
//     else
//         resultado = 3;
//     return resultado;
// }


// const char * zerim_ou_um(int op1, int op2, int op3){
//     if(op1 == op2 && op2 == op3)
//         return "Ninguem ganhou";
//     if(op1 != op2 && op2 == op3)
//         return "Jogador um";
//     if(op2 != op1 && op1 == op3)
//         return "Jogador dois";
//     return "Jogador tres"; //return default
// }

//0 - copas, 1 - ouros, 2 - espadas, 3 - paus
const char * pegar_naipe(int naipe){
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
const char * pegar_nome(int valor){
    const char * nomes[] = {"","As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};    
    if(valor > 0 && valor < 14)
        return nomes[valor];
    return "erro";
}


int main(){
    //conversoes validas
    // int x = 5.4; //conversao
    // float flo = 3; //conversoes
    // int z = 'a'; //converte autotico pro asc1
    // char c = 92; //converte usando asc

    // float f = divide(9, 0);
    // if(f == NAN)
    //     puts("cheguei no infinito");

    // printf("%f\n", f);

    // int x = 5;
    // float f = 6.5f;
    // double d = 6.7;
    // char c = 'a';
    // const char * texto = "meu nome";

    int valor = 2;
    int naipe = 2;
    printf("%s de %s\n", pegar_nome(valor), pegar_naipe(naipe));//J de paus

    return 0;
}
