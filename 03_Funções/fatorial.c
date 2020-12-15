#include<stdio.h>

int fat(int);

int main(void){

    int n = 5;

    int r = fat(n);

    printf("Valor de %d! = %d\n", n, r);

    return 0;
}

int fat(int n){
    
    int f = 1;

    while(n > 0){
        f *= n;
        n--;
    }

    return f;
}