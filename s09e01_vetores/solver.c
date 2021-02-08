#include <stdio.h>

int main(){
    int ant, atual, prox;
    int soma = 0;
    
	int n;
    scanf("%d", &n);
    ant   = 1;
    atual = 2;
    soma  = 2;
    
    do{
        prox = ant + atual;
        if(prox % 2 == 0 && prox < n)
            soma += prox;
        ant  = atual;
        atual = prox;
    }while(prox < n);
    
    printf("%d\n", soma);
    
}