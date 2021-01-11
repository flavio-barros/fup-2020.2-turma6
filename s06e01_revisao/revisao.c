#include <stdio.h> //puts
#include <stdlib.h>

int operar(int a, int b){
    int c = 0;
    a = a + 10;
    return a * b + c;
}


int main(){
    int x = 0;
    int y = 0;
    scanf("%d %d", &x, &y);
    int z = operar(x, y);
    printf("%d\n", z);
    return 0;
}
