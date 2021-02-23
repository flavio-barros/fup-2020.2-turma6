#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "getkey.h"

typedef struct{
    int l;
    int c;
    char s;
} Item;

char procurar(Item elementos[], int size, int l, int c){
    for(int i = 0; i < size; i++)
        if(elementos[i].l == l && elementos[i].c == c)
            return elementos[i].s;
    return '.';
}

void print_tela(int nl, int nc, Item elementos[], int size){
    for(int i = 0; i < 30; i++)
        puts("");
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++)
            printf("%c", procurar(elementos, size, l, c));
        puts("");
    }
}

void andar(Item * pers, char dir){
    if(dir == 'd')
        (*pers).c += 1; //1
    if(dir == 'e'){
        (*pers).c += 1; //1
        pers->l -= 1;
    }
    if(dir == 'q'){
        pers->c -= 1; //1
        pers->l -= 1;
    }
    if(dir == 'a')
        pers->c -= 1;   //2
    if(dir == 'w')
        pers[0].l -= 1; //3
    if(dir == 's')
        pers->l += 1;
}

int normalizar(int value){
    if(value == 0)
        return 0;
    if(value > 0)
        return 1;
    return -1;
}

void mover_bandico(Item pers, Item * bandido){
    if(rand() % 2 == 0)
        return;
    bandido->c += normalizar(pers.c - bandido->c);
    bandido->l += normalizar(pers.l - bandido->l);
}

bool iguais(Item a, Item b){
    return a.l == b.l && a.c == b.c;
}

int main(){ 
    setup_key(); //inicia nossa biblioteca
    srand(time(NULL));
    int nl = 15;
    int nc = 80;

    Item pers;
    pers.l = 2;
    pers.c = 2;
    pers.s = 'M';

    Item poste = {3, 5, 'P'}; //inline
    poste = (Item) {4, 4, 'T'}; //Objeto anônimo

    Item bandido = {nl - 1, nc - 1, '@'};

    Item buraco = {.l = 3, .s = 'B', .c = 7}; //com rótulos
    Item paredes[] = {{5, 2, '#'}, {6, 2, '#'}, {7, 2, '#'}, {10, 15, '#'}};
    int paredes_size = sizeof(paredes)/sizeof(Item);

    for(;;){
        Item elementos[1000];
        int size = 0;

        elementos[size++] = pers;
        elementos[size++] = buraco;
        elementos[size++] = poste;
        elementos[size++] = bandido;
        for(int i = 0; i < paredes_size; i++){
            elementos[size++] = paredes[i];
        }
        print_tela(nl, nc, elementos, size);

        char dir = getkey();

        Item pers_old = pers;
        andar(&pers, dir);
        for(int i = 0; i < paredes_size; i++){
            if(iguais(pers, paredes[i]))
                pers = pers_old;
        }

        Item band_old = bandido;
        mover_bandico(pers, &bandido);
        for(int i = 0; i < paredes_size; i++){
            if(iguais(bandido, paredes[i]))
                bandido = band_old;
        }

    }
}