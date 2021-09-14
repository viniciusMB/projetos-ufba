#include <iostream>
using namespace std;

int main () {
    int N, M, i, ii;
    cin >> N;
    cin >> M;
    int A[N][M];
    int B[N][M];

    for (i=0; i < N; i++){
        for(ii=0; ii < M; ii++){
            cin >> A[i][ii];
        }
    }
    for (i=0; i < N; i++){
        for(ii=0; ii < M; ii++){
            cin >> B[i][ii];
        }
    }
    for (i=0; i < N; i++){
        for(ii=0; ii < M; ii++){
            cout << (A[i][ii] - B[i][ii]) << ' ';
        }
        cout << endl;
    }
}