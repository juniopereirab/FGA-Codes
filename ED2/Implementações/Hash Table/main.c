/**
Modo de uso:
Ao criar uma Hash, iniciar ela com o tamanho da tabela, utilizando a função criaHash.
Sempre inserir elementos com a função, EnderAberto no sufixo. Pois essas funções realizam o tratamento de colisão corretamente.
**/

#include <stdio.h>
#include "HashTable.h"

int main(){
  Hash *ha;
  struct aluno al;
  struct aluno alu;
  struct aluno alun;
  ha = criaHash(5);

  al.matricula = 10;
  alu.matricula = 20;
  alun.matricula = 10;
  int x = insereHash_EnderAberto(ha, al);
  int y = insereHash_EnderAberto(ha, alu);
  int z = insereHash_EnderAberto(ha, alun);

  printf("X = %d e Y = %d\n", x, y);
  imprime_hash(ha);
  return 0;
}
