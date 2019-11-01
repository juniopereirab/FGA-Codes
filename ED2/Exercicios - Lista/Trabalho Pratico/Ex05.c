#include <stdio.h>
#include <stdlib.h>

#define MAX 100000

void MERGEAB(int *C, int *D, int *A, int *E, int m, int *B, int *F, int n){
  int k = 0;
  int i = 0;
  int j = 0;

  while(i < m && j < n){
    if(A[i] <= B[j]){
      C[k] = A[i];
      D[k] = E[i];
      i++;
      k++;
    }
    else{
      C[k] = B[j];
      D[k] = F[j];
      j++;
      k++;
    }
  }

  while(i < m){C[k] = A[i]; D[k] = E[i]; i++; k++;}
  while(j < n){C[k] = B[j]; D[k] = F[j]; j++; k++;}
}

void merge(int *V, int *W, int l, int meio, int r){
  int *C = malloc(sizeof(int)*(r-l+1));
  int *D = malloc(sizeof(int)*(r-l+1));
  MERGEAB(C, D, &V[l], &W[l], (meio-l+1), &V[meio+1], &W[meio+1], (r-meio));
  int k = 0;
  int i = l;
  while(i <= r){
    V[i] = C[k];
    W[i] = D[k];
    i++;
    k++;
  }
  free(C);
  free(D);
}

void mergesort(int *V, int *W, int l, int r){
  if(l == r){
    return;
  }
  int meio = (l+r)/2;
  mergesort(V, W, l, meio);
  mergesort(V, W, meio+1, r);
  merge(V, W, l, meio, r);
}

void quicksort(int *V, int *W, int l, int r, int seeds){

  if (l == seeds){ return; }

  int i, j, x, y, y2;
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
      y2 = W[i];

      V[i] = V[j];
      W[i] = W[j];

      V[j] = y;
      W[j] = y2;

      i++;
      j--;
    }

  }
  if(j > l){
    quicksort(V, W, l, j, seeds);
  }
  if(i < r){
    quicksort(V, W, i, r, seeds);
  }
}

void quicksortAll(int *V, int *W, int l, int r){

  int i, j, x, y, y2;
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
      y2 = W[i];

      V[i] = V[j];
      W[i] = W[j];

      V[j] = y;
      W[j] = y2;

      i++;
      j--;
    }

  }
  if(j > l){
    quicksortAll(V, W, l, j);
  }
  if(i < r){
    quicksortAll(V, W, i, r);
  }
}

void validateValor(int *V, int *W, int l, int r){
  quicksortAll(W, V, l, r);
  int k = 0;
  int i = 0;
  int *C = malloc(sizeof(int)*r);
  int *D = malloc(sizeof(int)*r);
  int aux = W[i];
  while(l < r){
    if(W[i] == aux){
      C[k] = W[i];
      D[k] = V[i];
      k++;
      i++;
    }
  }

  


}

int main(){
  int seeds;
  int aux1, aux2;
  int i = 0;

  int seeds_cod[MAX];
  int seeds_val[MAX];
  int result1[MAX];
  int result2[MAX];

  scanf("%d", &seeds);
  while(scanf("%d %d", &aux1, &aux2) != EOF){
    seeds_cod[i] = aux1;
    seeds_val[i] = aux2;

    i++;
  }

  quicksort(seeds_val, seeds_cod, 0, i-1, seeds);
  for(int i = 0; i < seeds; i++){
    result1[i] = seeds_cod[i];
    result2[i] = seeds_val[i];
  }

  mergesort(result1, result2, 0, seeds-1);

  for(int l = 0; l < seeds; l++){
    printf("%d %d\n", result1[l], result2[l]);
  }
  return 0;

}
