#include <bits/stdc++.h>

using namespace std;

int main(){
  int A;
  int N;
  int sumA = 0;

  scanf("%d %d", &A, &N);
  while(N <= 0){
    scanf("%d", &N);
  }

  for(int i = 0; i <= N-1; i++){
    sumA += A + i;
  }

  printf("%d\n", sumA);

  return 0;

}
