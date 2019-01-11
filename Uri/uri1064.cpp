#include <bits/stdc++.h>

using namespace std;

int main(){
  double n;
  int pos = 0;
  double med = 0;
  double media;

  for(int i = 0; i < 6; i++){
    cin >> n;
    if(n > 0.00){
      pos++;
      med += n;
    }
  }

  media = med/pos;
  cout << pos << " valores positivos" << endl;
  cout << fixed;
  cout.precision(1);
  cout << media << endl;


  return 0;
}
