#include <bits/stdc++.h>

using namespace std;

int main(){

  int N;
  int A = 0;
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &A);
    if(A == 0){
      printf("NULL\n");
    }
    else if(A > 0){
      if(A % 2 == 0){
        printf("EVEN POSITIVE\n");
      }
      else{
        printf("ODD POSITIVE\n");
      }
    }
    else{
      if(A % 2 == 0){
        printf("EVEN NEGATIVE\n");
      }
      else{
        printf("ODD NEGATIVE\n");
      }
    }
  }
  return 0;
}
