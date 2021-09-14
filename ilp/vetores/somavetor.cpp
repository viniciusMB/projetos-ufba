#include <iostream>
using namespace std;

int main(){

    int O, D, i, N;
    cin >> O;
    cin >> D;
    int produtoescalar = 0;
    int vetores[D];
    int vetores2[D];
    int resultado[D];

    for (i=0; i <= (D-1); i++) {
            cin >> vetores[i];
        }    
    if (O != 3) {
        for (i=0; i <= (D-1); i++) {
            cin >> vetores2[i];
        }
        if (O == 1){
            for (i=0; i <= (D-1); i++) {
                resultado[i] = vetores[i] + vetores2[i];
                if (i != (D-1)){
                    cout << resultado[i] << " ";
                }
                else {
                    cout << resultado[i];
                }
            }            
        }
        else if (O == 2){
            for (i=0; i <= (D-1); i++) {
                produtoescalar += vetores[i] * vetores2[i];
            }
            cout << produtoescalar;
        }
    }   
    else {
        cin >> N;
        for (i=0; i <= (D-1); i++){
            resultado[i] = N * vetores[i];        
            if (i != (D-1)){
                    cout << resultado[i] << " ";
                }
            else {
                cout << resultado[i];
            }
        }        
    }    
}