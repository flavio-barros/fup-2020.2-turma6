#include<stdio.h>

int main(){

    int a = 5, b;
    b = a++ * 2; // b = 5 * 2; a = 6;

    a = 5;
    b = ++a * 2; // a = 6; b = 6 * 2;

    printf("%d %d\n", b, a);

    return 0;
}