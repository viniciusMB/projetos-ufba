#include <iostream>
using namespace std;

int main() {
    int m, n, i;

    cin >> n >> m;
    int dimensions[n];
    int wishlist[m];

    for(i=0; i<n; i++){
        cin >> dimensions[i];
    }

    for(i=0; i<m; i++){
        cin >> wishlist[i];
    }

    int begin, end, item;
    int contador = 0;
    int item_index = -1;

    while (item_index <= (m-1)){
        begin = 0;
        end = n-1;
        item_index++;
        item = wishlist[item_index];

        while (begin < end) {
            
            i = (begin + end) / 2;

            if (dimensions[i] == wishlist[item_index]) {
                contador++;
                break;
            }

            if (dimensions[i] < item) {
                begin = i +1;
            }
            else {
                end = i;
            }
            
        }
        
    }

    cout << contador;
    


}