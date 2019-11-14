#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  int y;

  scanf("%d", &x);
  scanf("%d", &y);

  if(x < y){
    for(int i = x; i < y; i++){
      if(i % 5 == 2 || i % 5 == 3){
        printf("%d\n", i);
      }
      else{
        continue;
      }
    }
  }
  if(x > y){
    for(int i = y; i < x; i++){
      if(i % 5 == 2 || i % 5 == 3){
        printf("%d\n", i);
      }
      else{
        continue;
      }
    }
  }
  return 0;
}
