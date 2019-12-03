#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  while(scanf("%d", &n) && n){
    for(int i = 1; i <= n; i++){
      if(i == n){
        printf("%d\n", i);
      }
      else{
        printf("%d ", i);
      }
    }
  }

  return 0;
}
