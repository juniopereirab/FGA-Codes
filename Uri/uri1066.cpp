#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int par = 0;
  int impar = 0;
  int pos = 0;
  int neg = 0;

  for(int i = 0; i < 5; i++){
    cin >> n;
    if(n % 2 == 0){
      par++;
    }
    else{
      impar++;
    }

    if(n > 0){
      pos++;
    }
    if(n < 0){
      neg++;
    }
  }

  cout << par << " valor(es) par(es)" << endl;
  cout << impar << " valor(es) impar(es)" << endl;
  cout << pos << " valor(es) positivo(s)" << endl;
  cout << neg << " valor(es) negativo(s)" << endl;

  return 0;
}
