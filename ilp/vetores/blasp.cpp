#include <iostream>
using namespace std;

int main(){
    int N, M, i, MI;
    cin >> N;
    int fases[N];
    for (i = 0; i <= (N-1); i++){
        cin >> fases[i];
    }
    cin >> M;
    MI = M;

    for (i=0; i <= (N-1); i++) {
        if (fases[i] == 1){
            M = MI;
        }
        
        else {
            M = (M - fases[i]);
        }
        if (M <= 0){
            break;
        }
    }
    if (M <= 0){
        cout << "You Died";
    }
    else{
        cout << "Yes, you can";
    }
}