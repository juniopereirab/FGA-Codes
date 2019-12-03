#include <bits/stdc++.h>

using namespace std;

int main(){
  int V[3] = {0, 1, 1};
  int N;
  scanf("%d", &N);



  if(N == 1){
    printf("%d\n", V[0]);
  }
  else if(N == 2){
    printf("%d ", V[0]);
    printf("%d\n", V[1]);
  }
  else if(N > 2){
    printf("%d ", V[0]);
    printf("%d ", V[1]);
    for(int i = 0; i < N-2; i++){
      V[2] = V[0] + V[1];

      V[0] = V[1];
      V[1] = V[2];

      if(i == N-3){
        printf("%d\n", V[2]);
      }
      else{
        printf("%d ", V[2]);
      }
    }
  }

  return 0;
}
