#include <bits/stdc++.h>

using namespace std;

int main(){
  int X;
  int Z;
  int soma = 0;
  int N = 0;
  scanf("%d", &X);

  while(scanf("%d", &Z) && Z <= X){
    continue;
  }

  for(int i = X; soma <= Z; i++){
    soma += i;

    N++;
  }

  printf("%d\n", N);
  return 0;
}
