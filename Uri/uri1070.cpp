#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  int impar = 0;

  cin >> n;

  while(impar != 6){
      if(n % 2 != 0){
        cout << n << endl;
        n++;
        impar++;
      }
      else{
        n++;
      }
  }

return 0;
}
