#include <iostream>
using namespace std;

int main() {
    int n, i, m;

    cin >> n;    
    string dispo[n];
    int dispo_val[n];

    for (i=0; i<n; i++){
        cin >> dispo[i] >> dispo_val[i];
    }

    cin >> m;
    string compr[m];
    int compr_val[m];

    for (i=0; i<m; i++) {
        cin >> compr[i] >> compr_val[i];
    }

    int begin, end;
    string item;
    int contador = 0;
    int item_index = -1;

    while (item_index <= (m-1)){
        begin = 0;
        end = n-1;
        item_index++;
        item = compr[item_index];

        while (begin < end) {
            
            i = (begin + end) / 2;

            if (dispo[i] == compr[item_index]) {
                contador = contador + (dispo_val[i] * compr_val[item_index]);
                break;
            }

            if (dispo[i][0] < item[0]) {
                begin = i +1;
            }
            else {
                end = i;
            }
            
        }
        
    }

    cout << contador;

    

}