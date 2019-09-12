#include <stdio.h>
#include <stdlib.h>

int * intercala8(int *A, int M, int *B, int N, int *C, int O, int *D, int P, int *E, int Q, int *F, int R, int *G, int S, int *H, int T);
int * intercala4(int *A, int M, int *B, int N, int *C, int O, int *D, int P);
int * intercala2(int *A, int M, int *B, int N);

int main(void) {
  int *A, *B, *C, *D, *E, *F, *G, *H;
  int tam;

  scanf("%d", &tam);
  A = malloc(sizeof(int) * tam);
  int i = 0;
  int M = tam;
  while(tam--){
    scanf("%d", &A[i]);
    i++;
  }
  scanf("%d", &tam);
  B = malloc(sizeof(int) * tam);
  i = 0;
  int N = tam;
  while(tam--){
    scanf("%d", &B[i]);
    i++;
  }
  scanf("%d", &tam);
  C = malloc(sizeof(int) * tam);
  i = 0;
  int O = tam;
  while(tam--){
    scanf("%d", &C[i]);
    i++;
  }
  scanf("%d", &tam);
  D = malloc(sizeof(int) * tam);
  i = 0;
  int P = tam;
  while(tam--){
    scanf("%d", &D[i]);
    i++;
  }
  scanf("%d", &tam);
  E = malloc(sizeof(int) * tam);
  i = 0;
  int Q = tam;
  while(tam--){
    scanf("%d", &E[i]);
    i++;
  }
  scanf("%d", &tam);
  F = malloc(sizeof(int) * tam);
  i = 0;
  int R = tam;
  while(tam--){
    scanf("%d", &F[i]);
    i++;
  }
  scanf("%d", &tam);
  G = malloc(sizeof(int) * tam);
  i = 0;
  int S = tam;
  while(tam--){
    scanf("%d", &G[i]);
    i++;
  }
  scanf("%d", &tam);
  H = malloc(sizeof(int) * tam);
  i = 0;
  int T = tam;
  while(tam--){
    scanf("%d", &H[i]);
    i++;
  }

  int *X = intercala8(A, M, B, N, C, O, D, P, E, Q, F, R, G, S, H, T);
  for(int i = 0; i < (M+N+O+P+Q+R+S+T); i++){
    printf("%d ", X[i]);
  }

  free(A);
  free(B);
  free(C);
  free(D);
  free(E);
  free(F);
  free(G);
  free(H);
  free(X);
  return 0;
}

int * intercala2(int *A, int M, int *B, int N){
  int *C = malloc(sizeof(int) * (M+N));
  int i = 0, j = 0, k = 0;
  while(i < M && j < N){
    if(A[i] < B[j]){
      C[k] = A[i];
      i++;
      k++;
    }
    else{
      C[k] = B[j];
      j++;
      k++;
    }
  }

  if(i < M){C[k] = A[i]; i++; k++;}
  if(j < N){C[k] = B[j]; j++; k++;}

  return C;
}

int * intercala4(int *A, int M, int *B, int N, int *C, int O, int *D, int P){
  int *E = intercala2(A, M, B, N);
  int *F = intercala2(C, O, D, P);
  return intercala2(E, M+N, F, O+P);
}

int * intercala8(int *A, int M, int *B, int N, int *C, int O, int *D, int P, int *E, int Q, int *F, int R, int *G, int S, int *H, int T){
  int *X = intercala4(A, M, B, N, C, O, D, P);
  int *Y = intercala4(E, Q, F, R, G, S, H, T);
  return intercala2(X, (M+N+O+P), Y, (Q+R+S+T));
}
