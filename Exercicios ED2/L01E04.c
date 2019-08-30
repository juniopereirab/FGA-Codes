#include <stdio.h>

#define MAX 1000
char game[MAX][11];

void print_line(){
    printf("~~~~~~~~~~~\n");
}

void init_table(int a){
  for(int i = 0; i < 11; i++){
    for(int j = 0; j < a; j++){
      game[j][i] = ' ';
    }
  }
}

int main(){
  int L;
  int G = 0;
  char side;
  int line;
  char len_side;


  scanf("%d", &L);
  init_table(L);
  scanf("%d", &G);
  for(int i = 0; i <= G; i++){
    scanf("%c %d\n", &side, &line);
    if(side == 'E'){
      game[line][1] = '-';
      game[line][2] = '-';
      game[line][3] = '-';
    }
    if(side == 'D'){
      game[line][7] = '-';
      game[line][8] = '-';
      game[line][9] = '-';
    }
  }

  scanf("%c", &len_side);
  if(len_side == 'E'){
    game[0][2] = 'L';
    game[1][2] = 'L';
  }
  else if(len_side == 'D'){
    game[0][8] = 'L';
    game[1][8] = 'L';
  }

  for(int i = 0; i < L; i++){
    game[i][4] = '|';
    game[i][5] = '|';
    game[i][6] = '|';

  }
  print_line();
  for(int i = 9; i >= 0; i--){
    for(int j = 0; j < L; j++){
      printf("%c", game[i][j]);
    }
    printf("\n");
  }
  print_line();
//  while(scanf("%c", &inst) == 1){
//
//  }
}
