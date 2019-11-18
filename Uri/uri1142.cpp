#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  scanf("%d", &N);


  for(int j = 1; j <= 4*N; j++){
    if(j % 4 != 0){
      printf("%d ", j);
    }
    else{
      printf("PUM\n");
    }
  }

  return 0;
}
