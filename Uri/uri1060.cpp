#include <bits/stdc++.h>

using namespace std;

int main(){
  double n;
  int pos = 0;

  for(int i = 0; i < 6; i++){
    cin >> n;
    if(n > 0.00){
      pos++;
    }
  }

  cout << pos << " valores positivos" << endl;

  return 0;
}
