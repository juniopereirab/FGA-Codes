#include <bits/stdc++.h>

using namespace std;

int main(){
  int valid = 2;
  double soma = 0;
  double aux;
  double media;

  while(scanf("%lf", &aux) == 1){
    if(aux > 10.0 || aux < 0.0){
      printf("nota invalida\n");
    }
    else{
      if(valid != 0){
        soma += aux;
        valid--;
        if(valid == 0){
          media = soma/2.0;
          printf("media = %.2lf\n", media);
          break;
        }
      }
    }
  }

  return 0;
}
