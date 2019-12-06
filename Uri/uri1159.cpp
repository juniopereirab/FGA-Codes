#include <bits/stdc++.h>

using namespace std;

int main(){
  int X;
  int soma = 0;

  while(scanf("%d", &X) && X){
    if(X % 2 != 0){
      X++;
    }
    for(int j = 0; j < 5; j++){
      soma += X;
      X = X+2;
    }
    printf("%d\n", soma);
    soma = 0;
  }
  return 0;
}
