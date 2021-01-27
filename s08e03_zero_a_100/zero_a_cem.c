#include <stdio.h>
#include <stdlib.h> //rand() srand(int)
#include <time.h>//time()
#include <stdbool.h>

//gera um numero entre min e max - 1
int rand_intervalo(int min, int max){
    return rand() % (max - min) + min;
}

int main(){
    srand(time(NULL)); //usa o tempo de agora pra iniciar
    int num_maquina = rand_intervalo(1, 100);
    int menor = 0;
    int maior = 100;
    while(true){
        int num_usuario = 0;
        printf("Escolha um numero entre ]%d %d[ :", menor, maior);
        scanf("%d", &num_usuario);
        if(num_maquina == num_usuario){
            puts("Acertou seu cagado!!!");
            break;
        }else if(num_usuario > num_maquina){
            puts("Eh menor");
            maior = num_usuario;
        }else{
            puts("Eh maior");
            menor = num_usuario;
        }
        if(maior - menor == 2){
            puts("Bixo ruim da molesta, tu perdeu karnissa");
            break;
        }
    }

}
