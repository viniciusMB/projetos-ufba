#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    int aux = 0;
    cin >> n;
    int clientes[n];

    for (i=0; i<n; i++){
        cin >> clientes[i];
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(clientes[j] > clientes[j+1]){
                aux = clientes[j];
                clientes[j]= clientes[j+1];
                clientes[j+1] = aux;
            }
        }

    }
    for(i=0; i<n-1;i++){
        cout << clientes[i] << " ";
    }

}