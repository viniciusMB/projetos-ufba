#include <iostream>
using namespace std;

int main(){

    int N, i, ii, M;

    cin >> N >> M;

    int matrix[N][N];

    for(i=0; i < N; i++){
        for(ii=0; ii < N; ii++){
            cin >> matrix[i][ii];
        }
    }

    int ships = 0;
    int linha;
    int coluna;
    for (i=0; i < M; i++){
        cin >> linha >> coluna;
        if ((matrix[linha][coluna] != 1) && (linha<=(N-1)) && (coluna<=(N-1))){
            for(ii=linha; ii >=0; ii--){
                if (matrix[ii][coluna] == 1){
                    ships = ships+1;
                    matrix[ii][coluna] = 0;
                    break;
                }
            }
        }
        else {
            continue;
        }
    }        

    
    
    cout << ships << endl;

}
