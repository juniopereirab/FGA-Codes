#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  int y;
  while(scanf("%d %d", &x, &y) == 2){
    if(x == 0 || y == 0) break;

    if(x > 0){
      if(y > 0){
        printf("primeiro\n");
      }
      else if(y < 0){
        printf("quarto\n");
      }
    }
    else if(x < 0){
      if(y > 0){
        printf("segundo\n");
      }
      else if(y < 0){
        printf("terceiro\n");
      }
    }
  }
  return 0;
}
