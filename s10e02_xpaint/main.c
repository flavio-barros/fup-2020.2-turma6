#define XPAINT
#include "xpaint.h"
#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>

typedef struct{
    int x;
    int y;
    float v;
} Gota;

void draw_gota(int x, int y, int size){
    x_set_color("w");
    x_fill_circle(x, y, size);
    x_set_color("b");
    x_fill_circle(x, y, size - 1);
}

int main(){
    x_open(500, 500, "imagem");

    int ngotas = 30;
    Gota gotas[ngotas];
    for(int i = 0; i < ngotas; i++){
        gotas[i].x = rand() % 500;
        gotas[i].y = rand() % 500;
        gotas[i].v = 0;
    }

    int y = 0;
    while(true){
        x_set_color("0, 0, 0");
        x_clear();

        for(int i = 0; i < ngotas; i++){
            gotas[i].v += 1;
            gotas[i].x += 2;
            gotas[i].y += gotas[i].v;
            if(gotas[i].y > 500){
                gotas[i].y = 0;
                gotas[i].v = 0;
            }
            if(gotas[i].x > 500)
                gotas[i].x = 0;
            draw_gota(gotas[i].x, gotas[i].y, 10); 
        }
        x_save();
    }
    x_save();
    x_close();
}

