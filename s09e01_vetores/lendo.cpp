#include <iostream>
#include <vector>
#include <fstream> //para ler arquivos
#include <filesystem>
namespace fs = std::filesystem;
using namespace std;

void show_mat(vector<vector<int>> &mat){
    for(uint l = 0; l < mat.size(); l++){
        for(uint c = 0; c < mat[0].size(); c++){
            cout << mat[l][c] << " ";
        }
        cout << endl;
    }
}

int main(){
    int nl = 5, nc = 4;
    //cria uma matriz de nl por nc
    vector<vector<int>> mat(nl, vector<int>(nc, 0));
    cout << fs::current_path() << endl;
    ifstream arq("data.txt"); //abre o arquivo para leitura
    if(!arq){
        cout << "arquivo nao encontrado" << endl;
        exit(1);
    }
    for(uint l = 0; l < mat.size(); l++)
        for(uint c = 0; c < mat[0].size(); c++)
            arq >> mat[l][c];
    show_mat(mat);
}