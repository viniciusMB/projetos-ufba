#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, i, j;
    string aux;
    cin >> n;
    cin.ignore();
    string livros[n];
    string livro;

    for (i=0; i < n; i++){
       getline(cin, livro);
       livros[i] = livro;
    }

    for (i=0; i < n; i++){
        for(j=0; j< n-i-1; j++){
            if (livros[j].size() > livros[j+1].size()){
                aux = livros[j];
                livros[j] = livros[j+1];
                livros[j+1] = aux;

            }
        }
    }
    for (i=0; i < n; i++){
        if(i == i-1){
            cout << livros[i];
        }
        else {
            cout << livros[i] << endl;
        }
    }

   
}