#include <stdio.h>

#define MAX 140000

int busca(int p, int *V, int N){
  int a = 0;
  int b = N-1;
  int m;
  while(a <= b){
    m = a+(b-a)/2;
    if(V[m] == p){
      return 1;
    }
    else if(V[m] > p){
      b = m-1;
    }
    else{
      a = m+1;
    }
  }
  return 0;
}

void quicksort(int *V, int l, int r){
  int i, j, x, y;
  i = l;
  j = r;
  x = V[(l+r)/2];

  while(i <= j){
    while(V[i] < x && i < r){
      i++;
    }
    while(V[j] > x && j > l){
      j--;
    }
    if(i <= j){
      y = V[i];
      V[i] = V[j];
      V[j] = y;
      i++;
      j--;
    }
  }
  if(j > l){
    quicksort(V, l, j);
  }
  if(i < r){
    quicksort(V, i, r);
  }
}

int main(){

  int N;
  int V[MAX];
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &V[i]);
  }
  quicksort(V, 0, N-1);

  int aux;
  while(scanf("%d", &aux) == 1){
    if(busca(aux, V, N)){
      printf("sim\n");
    }
    else{
      printf("nao\n");
    }
  }

return 0;
}
