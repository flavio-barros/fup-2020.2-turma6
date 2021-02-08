#include <cstdio>
// #include <stdbool.h>
#include <iostream>
using namespace std;

string juntar(string one, string two){
    return one + two;
}

int main(){
    int x = 0;
    float f = 0.0f;
    int vet[5] = {5, 4, 3, 2, 1};
    bool value = true;
    (void) value;//ele nao dar warning de nao utilizada
    (void) vet;

    cin >> x >> f;
    cout << "o x eh " << x << "\n";
    printf("%03d %06.2f\n", x, f);

    string nome;
    cin >> nome;
    nome += " eh lindao";
    nome == "David";

    std::sort()
}