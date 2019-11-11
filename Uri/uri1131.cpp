#include <bits/stdc++.h>

using namespace std;

int main(){

  int sys;
  int inter = 0;
  int gremio = 0;
  int grenais = 1;
  int empates = 0;
  int jogos_inter = 0;
  int jogos_gremio = 0;

  do{
    scanf("%d %d", &inter, &gremio);
    if(inter > gremio){
      jogos_inter++;
    }
    else if(inter < gremio){
      jogos_gremio++;
    }
    else{
      empates++;
    }

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &sys);
    while(sys != 1 && sys != 2){
      printf("Novo grenal (1-sim 2-nao)\n");
      scanf("%d", &sys);
    }
    if(sys == 1){
      grenais++;
    }
  }while(sys != 2);

  printf("%d grenais\n", grenais);
  printf("Inter:%d\n", jogos_inter);
  printf("Gremio:%d\n", jogos_gremio);
  printf("Empates:%d\n", empates);
  if(jogos_inter > jogos_gremio){
    printf("Inter venceu mais\n");
  }
  else if(jogos_inter < jogos_gremio){
    printf("Gremio venceu mais\n");
  }

  return 0;

}
