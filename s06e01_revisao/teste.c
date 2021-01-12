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