#include <bits/stdc++.h>

using namespace std;

int main(){

  int n = 0;
  int alcool = 0;
  int gasol = 0;
  int diesel = 0;

  while(scanf("%d", &n) && n != 4){
    if(n == 1){
      alcool++;
    }
    else if(n == 2){
      gasol++;
    }
    else if(n == 3){
      diesel++;
    }
    else{
      continue;
    }
  }

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasol);
  printf("Diesel: %d\n", diesel);
  return 0;
}
