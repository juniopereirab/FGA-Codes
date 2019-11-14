#include <bits/stdc++.h>

using namespace std;

int main(){
  int X;
  int Y;
  int soma = 0;

  scanf("%d", &X);
  scanf("%d", &Y);

  if(X < Y){
    for(int i = X; i <= Y; i++){
      if(i % 13 != 0){
        soma += i;
      }
      else{
        continue;
      }
    }
  }
  if(X > Y){
    for(int i = Y; i <= X; i++){
      if(i % 13 != 0){
        soma += i;
      }
      else{
        continue;
      }
    }
  }

  printf("%d\n", soma);
  return 0;
}
