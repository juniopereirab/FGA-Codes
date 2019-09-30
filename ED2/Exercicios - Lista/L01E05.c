#include <stdio.h>
#define MAX 100000

void get_limit(int *A, int limite, int f, int soma, int i){
  if(i >= f){return;}
  if(A[i] >= limite && soma == 0){
    printf("%d\n", A[i]);
    i++;
  }
  if(soma >= limite){
    printf("%d\n", A[i]);
    i++;
    soma = 0;
  }
  else{
    soma += A[i];
    i++;
    get_limit(A, limite, f, soma, i);
  }
}

int main(){
  int V[MAX];
  int n;
  int i = 0;

  while(scanf("%d", &n) && n){
    V[i] = n;
    i++;
  }
  int limite;
  scanf("%d", &limite);

  get_limit(V, limite, i, 0, 0);
  return 0;
}
