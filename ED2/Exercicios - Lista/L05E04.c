#include <stdio.h>
#include <stdlib.h>

void quicksortD(int **V, int l, int r){
  int i, j, x, y, z;
  i = l;
  j = r;
  x = V[(l+r)/2][0];

  while(i <= j){
    while(V[i][0] < x && i < r){
      i++;
    }
    while(V[j][0] > x && j > l){
      j--;
    }
    if(i <= j){
      z = V[i][1];
      y = V[i][0];

      V[i][0] = V[j][0];
      V[i][1] = V[j][1];

      V[j][0] = y;
      V[j][1] = z;
      i++;
      j--;
    }
  }
  if(j > l){
    quicksortD(V, l, j);
  }
  if(i < r){
    quicksortD(V, i, r);
  }
}

int main(){
  int D, U, L, T;

  scanf("%d %d %d %d", &D, &U, &L, &T);
  int **V;
  int **P;
  int i;

  V = (int**)malloc(sizeof(int*)*T);
  for(int i = 0; i < T; i++){
    V[i] = (int*)malloc(sizeof(int)*2);
  }

  P = (int**)malloc(sizeof(int*)*T);
  for(int i = 0; i < T; i++){
    P[i] = (int*)malloc(sizeof(int)*2);
  }

  i = 0;
  while(i < T){
    scanf("%d/%d", &V[i][0], &V[i][1]);
    i++;
  }

  int limiteD = D - (D * (double)(L/100)); //TODO: Essa parte ta errada...
  int limiteU = U - (U * (double)(L/100));

  printf("%d %d\n", limiteD, limiteU);
  int j = 0;

  for(int i = 0; i < T; i++){
  //  printf("%d/%d\n", V[i][0], V[i][1]);

    if(V[i][0] < limiteD || V[i][1] < limiteU){
      P[i][0] = V[i][0];
      P[i][1] = V[i][1];
      j++;
    }
  }

  quicksortD(P, 0, j);
  for(int i = 0; i < j; i++){
    printf("%d/%d\n", P[i][0], P[i][1]);
  }
  return 0;
}
