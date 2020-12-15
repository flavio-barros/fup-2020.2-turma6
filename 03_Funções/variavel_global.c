#include<stdio.h>

void soma10(void);
void soma20(void);

int cont = 0;

int main(void){

    printf("cont: %d\n", cont);
    soma10();
    soma10();
    printf("cont: %d\n", cont);
    soma20();
    soma20();
    printf("cont: %d\n", cont);

    return 0;
}

void soma10(void){
    cont += 10;
}

void soma20(void){
    cont += 20;
}