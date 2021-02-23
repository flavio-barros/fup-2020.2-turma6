#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "getkey.h"
#define XPAINT
#include "xpaint.h"

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

    int nl = 20;
    int nc = 20;
    int side = 100;
    x_open(nc * side, nl * side, "sokoban");
    grid_init(side, 5);

    Item pers;
    pers.l = 2;
    pers.c = 2;
    pers.s = 'M';

    Item poste = {3, 5, 'P'}; //inline
    poste = (Item) {4, 4, 'T'}; //Objeto anônimo

    Item bandido = {nl - 1, nc - 1, '@'};

    Item buraco = {.l = 3, .s = 'B', .c = 7}; //com rótulos
    Item paredes[] = {{5, 2, 'P'}, {6, 2, 'P'}, {7, 2, 'P'}, {10, 15, 'P'}};
    int paredes_size = sizeof(paredes)/sizeof(Item);

    for(;;){
        Item elementos[1000];
        int elementos_size = 0;

        elementos[elementos_size++] = pers;
        elementos[elementos_size++] = buraco;
        elementos[elementos_size++] = poste;
        elementos[elementos_size++] = bandido;
        x_set_color(WHITE);
        x_clear();
        x_set_font_size(side);
        x_set_color(YELLOW);
        for(int l = 0; l < nl; l++)
            for(int c = 0; c < nc; c++)
                grid_square(l, c);
        x_set_color(BLACK);
        for(int i = 0; i < paredes_size; i++){
            elementos[elementos_size++] = paredes[i];
        }
        for(int i = 0; i < elementos_size; i++)
            x_write(elementos[i].c * side + side / 8, elementos[i].l * side, "%c", elementos[i].s);
        x_save();
        //print_tela(nl, nc, elementos, size);

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