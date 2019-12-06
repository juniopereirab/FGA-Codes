#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  int X, Y;
  int soma = 0;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%d %d", &X, &Y);
    for(int j = 0; j < Y; j++){
      if(X % 2 == 0){
        X++;
      }
      soma += X;
      X = X+2;
    }
    printf("%d\n", soma);
    soma = 0;
  }

  return 0;
}
