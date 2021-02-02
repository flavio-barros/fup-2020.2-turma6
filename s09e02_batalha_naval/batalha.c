#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void inicializar_vetores(bool barcos[], bool tiros[], int size){
    for(int i = 0; i < size; i++){
        barcos[i] = false;
        tiros[i] = false;
    }
}

void inserir_barcos(bool barcos[], int size, int n_barquinhos){
    for(int cont = 0; cont < n_barquinhos;){
        int pos = rand() % size;
        if(barcos[pos] == false){
            barcos[pos] = true;
            cont += 1;
        }
    }
}

void mostrar_barcos(bool barcos[], int size){
    printf("[ ");
    for(int i = 0; i < size; i++){
        printf("%c ", barcos[i] ? '*' : '-');
    }
    puts("]");
}

void mostrar_campo(bool barcos[], bool tiros[], int size){
    printf("[ ");
    for(int i = 0; i < size; i++)
        printf("%d ", i);
    puts("]");
    printf("[ ");
    for(int i = 0; i < size; i++){
        char c = '.';
        if(tiros[i])
            c = barcos[i] ? 'o' : 'x';
        printf("%c ", c);
    }
    puts("]");
}

int contar_acertos(bool barcos[], bool tiros[], int size){
    int cont = 0;
    for(int i = 0; i < size; i++)
        if(tiros[i] && barcos[i])
            cont += 1;
    return cont;
}

void jogar(bool barcos[], bool tiros[], int size, int n_barquinhos){
    while(contar_acertos(barcos, tiros, size) < n_barquinhos){
        mostrar_campo(barcos, tiros, size);
        printf("Onde voce quer atirar: ");
        int pos = -1;
        scanf("%d", &pos);
        tiros[pos] = true;
    }
}

int main(){
    srand(time(NULL)); //garante a aleatoriedade
    int size = 10;
    int n_barquinhos = 2;
    bool barcos[size];
    bool tiros[size];
    int n_acertos = 0;
    inicializar_vetores(barcos, tiros, size);
    inserir_barcos(barcos, size, n_barquinhos);
    jogar(barcos, tiros, size, n_barquinhos);
    mostrar_campo(barcos, tiros, size);
}