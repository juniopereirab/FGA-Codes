#include <iostream>

using namespace std;

int main(){
  int N = 0;
  int C = 0;
  int K = 0;
  int res = 0;
  int cont = 0;

  cin >> N;
  cin >> C;
  cin >> K;

  while(res <= N){
    res = C * K;
    C = res;
    cont++;
  }

  cout << cont << endl;

  return 0;
}
