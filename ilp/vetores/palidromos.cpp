#include <iostream>
#include <string>
using namespace std;

int main () {
    int i, j, k;
    j = 0;
    string S;
    getline(cin, S);
    int string_size = (S.size()) - 1;

    for (i=0; i < (string_size/2); i++){
        if(S[string_size - i] == S[i]){
            j += 1;
        }
    }
    if (j == (string_size/2)){
        cout << "Sim";
    }
    else {
        cout << "Nao";
    }


}