#include <iostream>
using namespace std;

int main () {
    int N, i, j, H, R;
    cin >> N;
    int matriz[N][N];

    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            cin >>matriz[i][j];
        }
    }

    cin >> H >> R;
    int H_total = 0;
    int R_total = 0;

    for (i=0; i < N; i++){
        R_total += matriz[i][R];
        matriz[i][R] = 0;
        H_total += matriz[H][i];
        matriz[H][i] = 0;
        
    }

    cout << "Harry " << H_total << endl;
    cout << "Ron " << R_total;


}