#include<stdio.h>

#define PI 3.1416F
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SOMA(a, b) ((a) + (b))

int main(){

    printf("Valor de PI: %.4f\n", PI + 10);
    printf("MAX = %d\n", MAX(15, 10));
    printf("SOMA = %d\n", SOMA(10*2, 5));
//  printf("SOMA = %d\n",  10*2 + 5);

    return 0;
}