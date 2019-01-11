#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  int soma = 0;

  cin >> a >> b;

  for(int i = a-1; i > b; i--){
    if(i % 2 != 0){
      soma += i;
    }
  }

  cout << soma << endl;
return 0;
}
