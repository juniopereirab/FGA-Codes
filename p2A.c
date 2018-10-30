#include <stdio.h>

int main(){
  int N, C, K;
  int res = 0;
  int cont = 1;

  scanf("%d %d %d", &N, &C, &K);

  while(res < N){
    res = C * K;
    cont++;
  }

  printf("%d", cont);

  return 0;
}
