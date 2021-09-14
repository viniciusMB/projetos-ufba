#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, i;
    cin >> N;
    cin.ignore();
    string nomes[N];
    for (i=0; i<N; i++){
        getline(cin, nomes[i]);
    }
    
    int k = 0;
    
    for (k=0; k < N; k++){
        string aux;
        aux = nomes[k];
        int spaces = 0;

        for(i=0; i < aux.size(); i++){
            if (aux[i] == ' '){
                spaces++;
            }
        }

        string word;
        int char_index = 0;
        int j = 0;
        int space_count = NULL;

        while (spaces != space_count){
            for (i=char_index; i < aux.size(); i++){
                if (aux[i] == ' '){
                    char_index++;
                    space_count++;
                    break;
                }
                else {
                    word[j] = aux[i];
                    char_index++;
                    j++;
                }
            }
            char letra = toupper(word[0]);
            cout << letra << '.' << ' ';
            j = 0;
        }
        
        for (i=char_index; i < aux.size(); i++){
            if(i == (aux.size() - 1)){
                cout << aux[i] << endl;
            }
            else {
                if(i == char_index){
                    char last_letra = toupper(aux[i]);
                    cout << last_letra;
                }
                else{
                    cout << aux[i];
                }
                
            }            
        }
    }      
}