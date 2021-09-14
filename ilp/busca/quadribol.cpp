#include <iostream>
using namespace std;

int main(){
    int N, i, j, aux;
    cin >> N;
    bool troca;
    int candidatos[N];
    for(i=0; i<N; i++){
        cin >> candidatos[i];
    }
    for (i=0; i<N-1; i++){
        troca = false;
        for (j=0; j<N-i-1; j++){
            if(candidatos[j] > candidatos[j+1]){
                aux = candidatos[j];
                candidatos[j] = candidatos[j+1];
                candidatos[j+1] = aux;
                troca = true;
            }
        }
        if (troca == false){
            break;
        }

        
    }

    for(i=0; i<8; i++){
        if (i != 7){
            cout << candidatos[i] << " ";
        }
        else if (i == 7){
            cout << candidatos[i];
        }
    }
}