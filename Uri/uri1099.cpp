#include <bits/stdc++.h>

using namespace std;

int main(){

  int x = 0, y = 0;
  int aux = 0;
  int N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%d %d", &x, &y);
    if(x == y || x+1 == y || x-1 == y){
      printf("0\n");
    }
    else if(x < y){
      x++;
      while(x < y){
        if(x % 2 != 0){
          aux += x;
          x++;
        }
        else{
          x++;
        }
      }
      printf("%d\n", aux);
    }
    else{
      x--;
      while(x > y){
        if(x % 2 != 0){
          aux += x;
          x--;
        }
        else{
          x--;
        }
      }
      printf("%d\n", aux);
    }
    aux = 0;
  }
  return 0;
}
