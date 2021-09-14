#include <iostream>
using namespace std;

int main () {
    int F, C, i, j;
    cin >> F >> C;

    int matriz[F][C];

    for (i=0; i < F; i++){
        for (j=0; j < C; j++){
            cin >> matriz[i][j];
        }
    }
    int fileira, X, Y;
    for (i=0; i < F; i++){
        for (j=1; j < C; j++){
            if ((matriz[i][j] == 0) && (matriz[i][j] == matriz[i][j-1])){
                 fileira = i+1;
                 X = j;
                 Y = j + 1;
                break;
            }
        }
    }

    F = fileira;
    cout << "Fileira: " << F << endl;
    cout << "Assentos: " << X << " e " << Y;


}