#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  double notas[7];
  double d;
  double result = 1;
  map<double, int> nt;

  cin >> n;

  double res[100];

  for(int i = 0; i < n; i++){
    cin >> d;
    for(int j = 0; j < 7; j++){
      cin >> notas[j];
    }


    for(int j = 0; j < 7; j++){
      int m = j;
      for(int k = j + 1; k < 7; k++){
        if(notas[k] < notas[m]){
          m = k;
        }
      }
      swap(notas[j], notas[m]);
    }

    for(int j = 0; j < 7; j++){
      cout << notas[j] << endl;
    }

    notas[0] = 1;
    notas[1] = 1;
    notas[5] = 1;
    notas[6] = 1;

    for(int x = 0; x < 7; x++){
      result *= notas[x];
    }
  res[n] = result;
  nt[res[n]] = n+1;

  for(int j = 0; j < n; j++){
    int m = j;
    for(int k = j + 1; k < n; k++){
      if(res[k] < res[m]){
        m = k;
      }
    }
    swap(notas[j], notas[m]);
  }
  }

  for(int i = 0; i < n; i++){

    cout << nt[res[i]] << " " << res[i] << endl;
  }



  return 0;
}
