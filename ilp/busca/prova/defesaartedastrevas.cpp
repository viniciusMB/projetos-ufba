#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, i, j, k;
    int maiorsize = 0;
    cin >> N;
    cin.ignore();
    string runas[N];
    string runa1, runa2;
    char matriz[N][10];
    string aux;

    for(i=0; i<N; i++){
        getline(cin, runas[i]);
    }


    for (i=0; i < N; i++){
        for(j=0; j< N-i-1; j++){
            runa1 = runas[j];
            runa2 = runas[j+1];
            if(i==0){
                if ((int)runa1[i] > (int)runa2[i]){
                    aux = runas[j];
                    runas[j] = runas[j+1];
                    runas[j+1] = aux;

                }
            }
            

            if(i>0){
                if ((int)runa1[i]+(int)runa1[i-1] > (int)runa2[i]+ (int)runa2[i-1]){
                    aux = runas[j];
                    runas[j] = runas[j+1];
                    runas[j+1] = aux;
                }
            }


        }
    }

    for(i=0; i<N; i++){
        cout << runas[i] << endl;
    }



}