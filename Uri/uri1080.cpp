#include <bits/stdc++.h>

using namespace std;

int main(){

  int num = 0;
  int maior = 0;
  int posicao = 0;

  for(int i = 1; i <= 100; i++){
    scanf("%d", &num);
    if(num > maior){
      maior = num;
      posicao = i;
    }
  }

  printf("%d\n%d\n", maior, posicao);
  return 0;
}
