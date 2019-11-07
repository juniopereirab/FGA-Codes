#include <bits/stdc++.h>

using namespace std;

int main(){
  int j = 7;

  for(int i = 1; i <= 9;){
    for(int a = 0; a < 3; a++){
      printf("I=%d J=%d\n", i, j);
      j--;
    }
    i += 2;
    j += 5;
  }

  return 0;
}
