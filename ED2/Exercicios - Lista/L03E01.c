#include <stdio.h>
#include <stdlib.h>

void merge(long int *v,long int *c,long int i,long int m,long int f);
void sort(long int *v,long int *c,long int i,long int f);
void mergesort(long int *v,long int n);



int main (void) {
  int aux;
  int a = 0;

  int *V = malloc(sizeof(int)*1);
  while(scanf("%d", &aux) == 1){
    V = realloc(V, sizeof(int)*1);
    V[a] = aux;
    a++;
  }

  mergesort(V, a);

  for(int i = 0; i < a; i++){
    if(i == a-1){
      printf("%d\n", V[i]);
    }
    else{
      printf("%d ", V[i]);
    }
  }
  free(V);
  return 0;
}

void mergesort(int *v, int n) {
  int *c = malloc(sizeof(long int) * n);
  sort(v, c, 0, n - 1);
  free(c);
}

void sort(int *v, int *c, int i, int f) {
  if (i >= f) return;

  int m = (i + f) / 2;

  sort(v, c, i, m);
  sort(v, c, m + 1, f);


  if (v[m] <= v[m + 1]) return;

  merge(v, c, i, m, f);
}

void merge(int *v, int *c, int i, int m, int f) {
  int z,
      iv = i, ic = m + 1;

  for (z = i; z <= f; z++) c[z] = v[z];

  z = i;

  while (iv <= m && ic <= f) {
    if (c[iv] < c[ic]) v[z++] = c[iv++];
    else v[z++] = c[ic++];
  }

  while (iv <= m) v[z++] = c[iv++];

  while (ic <= f) v[z++] = c[ic++];
}
