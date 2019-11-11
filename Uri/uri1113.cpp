#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  while(scanf("%d %d", &a, &b) && a != b){
    if(a > b){
      printf("Decrescente\n");
    }
    else if(a < b){
      printf("Crescente\n");
    }
  }

  return 0;
}
