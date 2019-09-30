#include <stdio.h>
#include "HashTable.h"

int main(){
  Hash *ha;
  struct aluno al;
  struct aluno alu;

  al.matricula = 10;
  alu.matricula = 20;
  int x = insereHash_EnderAberto(ha, al);
  int y = insereHash_SemColisao(ha, al);

  printf("X = %d e Y = %d\n", x, y);

  return 0;
}
