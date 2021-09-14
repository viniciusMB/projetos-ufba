#include <iostream>
using namespace std;

int main() {
    int N, M, i, ii;
    cin >> N >> M;
    int matriz[N][M];
    

    for (i=0; i < N; i++){
        for (ii=0; ii < M; ii++){
            cin >> matriz[i][ii];
        }
    }
   

    int ovos = 0;
    for (i=0; i < N; i++){
        for (ii=0; ii <= M; ii++){
            if (i%2 == 0){
                ovos += matriz[i][ii];
            }
            else {
                ovos += matriz[i][M-1-ii];
            }
            if (ovos < 0){
                ovos = 0;
            }

            
        }
    }
    
    cout << ovos << endl;
    
}