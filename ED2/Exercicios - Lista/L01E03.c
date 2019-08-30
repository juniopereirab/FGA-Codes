#include <stdio.h>

int main(){

  int aux;
  int cont = 0;

  while(scanf("%d", &aux) == 1){
    cont++;
  }

  printf("%d\n", cont);

  return 0;
}
