#include <iostream>
using namespace std;

int main () {
    int N, i, E, j, l, aux;
    cin >> N;
    int R[N];
    j = 0;
    for (i=0; i <= (N-1); i++){
        cin >> E;
        if ((E <= 7)){
            R[j] = E;
            j += 1;
        }
    }
    int RR[j];
    for (i=0; i <= (j-1); i++){
        for (l=0; l <= (j-1); l++){
            if (R[l] > R[l+1]){
                aux = R[l];
                R[l] = R[l+1];
                R[l+1] = aux;
            }
        }        
    }

    for (i=0; i <= (j-1); i++){
        RR[i] = R[i];
    }

    for (i=0; i <= (j-1); i++){
        if (i != (j-1)){
            cout << RR[i] << " ";
        }
        else {
            cout << RR[i];
        }
        
    }
    if (j == 7){
        cout << "Saia Shenlong e realize o meu desejo";
    }
    else {
        cout << "Nao encontramos todas";
    }

}