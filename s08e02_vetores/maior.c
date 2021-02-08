#include <stdio.h>
#include <limits.h>

int main(){

    int maior = INT_MIN, menor = INT_MAX;
    
    for(int i = 0; i < 5; i++){
        int value = 0;
        scanf("%d", &value);
        if(value < menor)
            menor = value;
        else if(value > maior)
            maior = value;
    }
    printf("%d\n", (menor + maior));
}

// 30 10 11 25 8