#include <iostream>
using namespace std;

int main() {

    int N, M, i, ii;
    cin >> M >> N;
    int matriz[N][M];

    for (i=0; i < N; i++){
        for(ii=0; ii < M; ii++){
            cin >> matriz[i][ii];
        }
    }

    int A, L, C, soma;
    cin >> A;

    for(i=0; i < A; i++){
        cin >> L >> C;
        L = L-1;
        C = C-1;
        if (matriz[L][C] == 1){
            matriz[L][C] = 0;
        }
        else{
            continue;
        }
    }
    soma = 0;
    for (i=0; i < N; i++){
        for(ii=0; ii < M; ii++){
            soma += matriz[i][ii];
        }
    }
    if (soma == 0){
        cout << "HASTA LA VISTA BABY";
    }
    else {
        cout << "I'LL BE BACK";
    }
}