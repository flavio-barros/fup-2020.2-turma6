#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


bool eh_digito(char c){
    return c >= '0' && c <= '9';
}

const char * pegar_nome(int value){
    const char * nomes[] = {"", "As", "2", "3", "4", "5", "6", "7", "8", "9", 
                   "10", "J", "Q", "K"};
    return nomes[2];
}

bool eh_consoante(char c){
    c = tolower(c);
    const char * consoantes = "bcdfghjklmnpqrstvwxyz";
    //char consoantes[] = "bcdfghjklmnpqrstvwxyz";
    for(int i = 0; consoantes[i] != '\0'; i++)
        if(c == consoantes[i])
            return true;
    return false;
}

bool eh_vogal(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int contar_vogais(char * texto){
    int cont = 0;
    for(int i = 0; texto[i] != '\0'; i++){
        char c = texto[i];
            cont += 1;
    }
    return cont;
}

int main(){
    const char * cidade = "quixada";
    printf("%c\n", *cidade);  //q
    printf("%c\n", cidade[0]);//q
    printf("%c\n", cidade[1]);//u
    printf("%c\n", cidade[2]);//u
    printf("%c\n", cidade[6]);//a
    int x = 5 > 4 ? 5 : 4;

    printf("%s\n", cidade[7] == 0 ? "sim" : "nao");//sim

    printf("%d\n", contar_vogais(cidade));

    char sovogais[50];
    int size = 0;
    for(int i = 0; cidade[i] != '\0'; i++){
        if(eh_vogal(cidade[i])){
            sovogais[size] = cidade[i];
            size += 1;
        }
    }
    sovogais[size] = '\0';
    puts(sovogais);
}