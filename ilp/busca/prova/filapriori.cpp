#include <iostream>
using namespace std;

int main (){
    int N, i, j, aux;
    int quant = 0;
    int velhosquant = 0;
    cin >> N;
    int pessoas[N];
    int jovemindex[N];
    int velhosindex[N];


    for(i=0; i<N; i++){
        cin >> pessoas[i];
        if (pessoas[i] < 60){
            jovemindex[quant] = i;
            quant += 1;
        }
        else{
            velhosindex[velhosquant] = i;
            velhosquant += 1;
        }
    }

    if(velhosquant == 0){
        cout << "Fila que segue!";
    }

    else{
        int jovens[quant];
        int velhos[velhosquant];



        for(i=0; i<quant; i++){
            jovens[i] = pessoas[jovemindex[i]];

        }

        for(i=0; i<velhosquant; i++){
            velhos[i] = pessoas[velhosindex[i]];

        }

        for(i=0;i<N-1;i++){
            for(j=0;j<velhosquant-i-1;j++){
                if(velhos[j] < velhos[j+1]){
                    aux = velhos[j];
                    velhos[j]= velhos[j+1];
                    velhos[j+1] = aux;
                }
            }

        }

        

        for(i=0; i<velhosquant; i++){
            cout << velhos[i] << " ";
        }

        for(i=0; i<quant; i++){
            if (i==quant-1){
                cout << jovens[i];
            }
            else{
                cout << jovens[i] << " ";
            }
        }
    }

    
}