#include <bits/stdc++.h>

using namespace std;

int main(){

  for(int i = 1; i <= 9;){
    for(int j = 7; j >= 5; j--){
      printf("I=%d J=%d\n", i, j);
    }
    i += 2;
  }
  return 0;
}
