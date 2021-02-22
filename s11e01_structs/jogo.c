#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    for(int l = 0; l < nl; l++){
        for(int c = 0; c < nc; c++)
            printf("%c", procurar(elementos, size, l, c));
        puts("");
    }
}

void andar(Item * pers, char dir){
    if(dir == 'd')
        (*pers).c += 1; //1
    if(dir == 'a')
        pers->c -= 1;   //2
    if(dir == 'w')
        pers[0].l -= 1; //3
    if(dir == 's')
        pers->l += 1;
    return pers;
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

int main(){
    srand(time(NULL));
    int nl = 10;
    int nc = 40;

    Item pers;
    pers.l = 2;
    pers.c = 2;
    pers.s = 'M';

    Item poste = {3, 5, 'P'}; //inline
    poste = (Item) {4, 4, 'T'}; //Objeto anônimo

    Item bandido = {nl - 1, nc - 1, '@'};

    Item buraco = {.l = 3, .s = 'B', .c = 7}; //com rótulos


    for(;;){
        Item elementos[1000];
        int size = 0;

        elementos[size++] = pers;
        elementos[size++] = buraco;
        elementos[size++] = poste;
        elementos[size++] = bandido;

        print_tela(nl, nc, elementos, size);

        char dir;
        scanf(" %c", &dir);
        andar(&pers, dir);
        mover_bandico(pers, &bandido);
    }
}

