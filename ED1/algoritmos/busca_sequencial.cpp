#include <bits/stdc++.h>

using namespace std;

int main(){
  const vector<int> ps {2, 3, 5, 7, 11, 13, 17, 19, 23};
  int p = 23;

  auto it = find(ps.begin(), ps.end(), p);
  
  if(it != ps.end()){
    cout << p << " encontrado na posição " << it - ps.begin() << "\n";
  }
  else{
    cout << p << " não encontrado\n";
  }

  return 0;
}
