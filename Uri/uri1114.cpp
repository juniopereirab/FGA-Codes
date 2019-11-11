#include <bits/stdc++.h>

using namespace std;

int main(){

  int senha = 2002;
  int a;

  while(scanf("%d", &a) == 1){
    if(a != senha){
      printf("Senha Invalida\n");
    }
    else{
      printf("Acesso Permitido\n");
      break;
    }
  }
  return 0;
}
