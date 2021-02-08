#include <stdio.h>

int main(){
    int x = 7;
    int* p = &x;
    // int a = *p; //7
    // *p = a + 5; //int
    // p = &a;
    printf("%d %p\n", x, &x);
    printf("%p %d\n", p, *p);
}