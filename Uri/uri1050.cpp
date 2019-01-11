#include <bits/stdc++.h>

using namespace std;

int main(){

  map<int, string> ddd;
  int i;

  ddd[61] = "Brasilia";
  ddd[71] = "Salvador";
  ddd[11] = "Sao Paulo";
  ddd[21] = "Rio de Janeiro";
  ddd[32] = "Juiz de Fora";
  ddd[19] = "Campinas";
  ddd[27] = "Vitoria";
  ddd[31] = "Belo Horizonte";

  cin >> i;

  if(i == 61 || i == 71 || i == 11 || i == 21 || i == 32 || i == 19 || i == 27 || i == 31){
    cout << ddd[i] << endl;
  }
  else{
    cout << "DDD nao cadastrado" << endl;
  }

  return 0;
}
