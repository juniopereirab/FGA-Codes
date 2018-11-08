#include <stdio.h>

int i;

void imprimir_edicoes(const int *edicoes, int N){
  const char msg[][16] = {", ", "\n"};

  for(i = 0; i < N; i++){
    printf("%d%s", edicoes[i], msg[i+1 == N]);
  }
}

int buscar_edicao(int edicao, const int *edicoes, int N){
  int a = 0, b = N - 1, m;

  while(a <= b){
    m = a + (b-a)/2;

    if(edicoes[m] == edicao){
      return 1;
    }

    else if(edicoes[m] > edicao){
      b = m - 1;
    }
    else{
      a = m + 1;
    }
  }

  return 0;
}

int main(){
  int edicoes[] = {12, 28, 34, 40, 51, 67, 77, 80, 95}, N = 8, edicao;

  do {
    printf("\nColeção disponível: ");
    imprimir_edicoes(edicoes, N);

    printf("Insira o numero da edição a ser localizada: ");
    if(scanf("%d", &edicao) != 1 || edicao < 0){
      break;
    }

    if(buscar_edicao(edicao, edicoes, N)){
      printf("Edição %d encontrada\n", edicao);
    }
    else{
      printf("A edição %d não faz parte da coleção\n", edicao);
    }
  } while(1);

  printf("Finalizando o programa...\n");

  return 0;
}
