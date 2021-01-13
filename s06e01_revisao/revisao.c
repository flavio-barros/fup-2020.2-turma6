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
