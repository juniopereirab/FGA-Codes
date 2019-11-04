#include <bits/stdc++.h>

using namespace std;

int main(){

  for(int i = 1, j = 60; j >= 0;){
    printf("I=%d J=%d\n", i, j);
    i += 3;
    j -= 5;
  }

  return 0;
}
