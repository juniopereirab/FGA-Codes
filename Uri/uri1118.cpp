#include <bits/stdc++.h>

using namespace std;

int main(){

  int valid = 2;
  int sys;
  double aux = 0.0;
  double soma = 0.0;
  double media = 0.0;

  do{
    while(scanf("%lf", &aux) == 1){
      if(aux < 0 || aux > 10){
        printf("nota invalida\n");
      }
      else{
        if(valid != 0){
          soma += aux;
          valid--;
          if(valid == 0){
            media = soma/2;
            printf("media = %.2lf\n", media);
            break;
          }
        }
      }
    }
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &sys);
    while(sys != 1 && sys != 2){
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &sys);
    }
    valid = 2;
    media = 0.0;
    soma = 0.0;
  }while(sys != 2);
  return 0;
}
