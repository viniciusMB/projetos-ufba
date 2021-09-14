#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    short int N, i;
    
    cin >> N;
    short int I [N];
    for (i=0; i <=(N-1); i++){
     cin >> I[i];
    }
    
    i = 0;

    for (i=0; i <=(N-1); i++){
     cout << I[((N-1)-i)] << " ";
    }
}