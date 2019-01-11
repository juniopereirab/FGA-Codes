#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int par = 0;

  for(int i = 0; i < 5; i++){
    cin >> n;
    if(n % 2 == 0){
      par++;
    }
  }

  cout << par << " valores pares" << endl;

  return 0;
}
