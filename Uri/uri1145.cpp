#include <bits/stdc++.h>

using namespace std;

int main(){

  int X, Y;
  scanf("%d %d", &X, &Y);

  for(int i = 1; i <= Y; i++){
    printf("%d", i);
    if(i % X != 0){
      printf(" ");
    }
    else{
      printf("\n");
    }
  }
  return 0;
}
