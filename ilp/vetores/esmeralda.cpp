#include <iostream>
using namespace std;
int main() {
    int N, E, C, i, j;
    cin >> N;
    int L[N];
    j = 0;

    for (i = 0; i <= (N-1); i++){
      cin >> E;
      L[i] = E;
    }
    
    cin >> C;;
    
    for (i = 0; i <= (N-1); i++) {
      if (L[i] == C){
        j = 1;
        cout << C;
        break;
      }
    }
    if (j==0){
      cout << -1;
    }
  return 0;

}