#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  scanf("%d", &N);

  for(int i = 1; i <= N; i++){
    if(N % i == 0){
      printf("%d\n", i);
    }
    else{
      continue;
    }
  }

  return 0;
}
