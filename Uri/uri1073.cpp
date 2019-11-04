#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;

  scanf("%d", &N);

  for(int i = 1; i <= N; i++){
    if(i % 2 == 0){
      printf("%d^2 = %d\n", i, i*i);
    }
    else{
      continue;
    }
  }

  return 0;
}
