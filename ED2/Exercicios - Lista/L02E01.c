#include <stdio.h>

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
    aux++;
  }
  if(j > l){
    quicksort(V, l, j, aux, seeds);
  }
  if(i < r){
    quicksort(V, i, r, aux, seeds);
  }
}

int main(){
  int V[100000];
  int tam = 0;
  int aux;

  while(scanf("%d", &aux) == 1){
    V[tam] = aux;
    tam++;
  }
  quicksort(V, 0, tam-1, 0, 5);

  for(int a = 0; a < tam; a++){
    if(a+1 == tam){
      printf("%d\n", V[a]);
    }else{
      printf("%d ", V[a]);
    }
  }

  return 0;
}
