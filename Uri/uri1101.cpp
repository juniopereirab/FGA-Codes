#include <bits/stdc++.h>

using namespace std;

int main(){
  int a;
  int b;
  int aux = 0;
  while(scanf("%d %d", &a, &b) && a && b){
    if(a <= 0 || b <= 0){
      break;
    }
    if(a >= b){
      while(a >= b){
        printf("%d ", b);
        aux += b;
        b++;
      }
    }
    else if(a <= b){
      while(a <= b){
        printf("%d ", a);
        aux += a;
        a++;
      }
    }
    printf("Sum=%d\n", aux);
    aux = 0;
  }
  return 0;
}
