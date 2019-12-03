#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  int fat = 1;
  scanf("%d", &N);

  for(int i = N; i >= 1; i--){
    fat *= i;
  }
  printf("%d\n", fat);
  return 0;
}
