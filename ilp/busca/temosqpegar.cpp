#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, i, aux, j, pokemon_forca;
    char ordem, classif;
    string aux, pokemon_nome;

    cin >> n >> classif >> ordem;

    int forcas[n];
    string pokemons[n];

    for (i=0; i<n; i++){
        cin >> pokemon_nome >> pokemon_forca;
        pokemons[i] = pokemon_nome;
        forcas[i] = pokemon_forca;
    }

    if (classif == 'N'){
        if (ordem == 'C'){
            for (i=0; i<n; i++){
                for(j=0; j<n-i-1; j++){
                    
                }
            }
        }
    }

}