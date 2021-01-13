## [par.c](par.c)

```c
#include <stdio.h>

int main(){
    int opcao, d1, d2;
    scanf("%d %d %d", &opcao, &d1, &d2);
    int soma = d1 + d2;
    if(opcao == 0 && soma % 2 == 0){
        puts("0");
    }else if(opcao == 1 && soma % 2 == 1){
        puts("0");
        printf("0\n");
    }else{
        puts("1");
    }
}
```

---
## [raiz.c](raiz.c)

```c
#include <math.h>
#include <stdio.h>

int main(){
    float x = sqrt(8);
    printf("%f\n", x);
}
```

---
