#include <stdio.h>
            //ponteiro para x, f
void diminuir(int *x, float *f){
    //no endereco de x coloque o valor de x - 1
    *x = *x - 1;
    *f = *f - 1;
}

int main(){
    int x = 7;
    float f = 5.4;
    diminuir(&x, &f);
    printf("%d %.2f\n", x, f);//
    printf("%p %p\n", &x, &f);
}