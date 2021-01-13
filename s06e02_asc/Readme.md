## [solver.c](solver.c)

```c
#include <stdio.h>


const char * verifica_char(char c){
    if(c >= 'a' && c <= 'z')
        return "minusculo";
    else if(c >= 'A' && c <= 'Z')
        return "maiusculo";
    else if(c >= '0' && c <= '9')
        return "digito";
    return "pontuacao";
}

int main(){
    int num;
    scanf("&d", num);
    if(num == 0){
        puts("jogue de novo");
        return 0;
    }
    num -= 1;
    char c = 'a' + num % 26;
    printf("%c\n", c);
}

int main2(){
    char c = 0; //TODA VARIAVEL DEVE SER INICIALIZADA
    scanf(" %c", &c);
    puts(verifica_char(c));
    c -= 'a' - 'A';
    printf("%c\n", c);
    return 0;
}
```

---
