#include <stdio.h>
#define MAX 10000

int V[MAX];

int main(){

  int n;
  int i = 0;
  int a = 0;
  int j = 1789;
  int soma = 0;

  while(scanf("%d", &n) && n){
    V[i] = n;
    i++;
  }
  int limite;
  scanf("%d", &limite);

  for(a = 0; a < i; a++){
    if(V[a] >= limite && soma == 0){
      V[a] *= j;
    }
    else{
      soma += V[a];
      if(soma >= limite){
        V[a] *= j;
        soma = 0;
      }
    }
  }

  for(a = i-1; a >= 0; a--){
    if(V[a] % j == 0){
      printf("%d ", V[a]/j);
    }
  }


  return 0;
}
