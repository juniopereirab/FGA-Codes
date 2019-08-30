#include <stdio.h>

int main(){

  int N;
  int X;
  int soma = 0;

  scanf("%d", &N);
  while(N){
    scanf("%d", &X);
    soma += X;
    N--;
  }

  printf("%d\n", soma);

  return 0;
}
