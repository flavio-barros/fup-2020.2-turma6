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
