#include <stdio.h>
#include <stdlib.h>

struct info{
  char palavra[15];
};

struct hash{
  int qtd, TABLE_SIZE;
  struct info **itens;
};

int chaveDivisao(int chave, int TABLE_SIZE){
  return (chave & 0x7FFFFFFF) % TABLE_SIZE;
}

int buscaHash_EnderAberto(Hash *ha, char palavra[], struct info* al){
  if(ha == NULL) return 0;

  int i, pos, newPos;
  pos = chaveDivisao(mat, ha->TABLE_SIZE);
  for(i = 0; i < ha->TABLE_SIZE; i++){
    newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
    if(ha->itens[newPos] == NULL){
      return 0;
    }
    if(ha->itens[newPos]->matricula == mat){
      *al = *(ha->itens[newPos]);
      return 1;
    }
  }
  return 0;
}

int insereHash_EnderAberto(Hash* ha, struct aluno al){
  if(ha == NULL || ha->qtd == ha->TABLE_SIZE){
    return 0;
  }
  int chave = al.matricula;
  int i, pos, newPos;
  pos = chaveDivisao(chave, ha->TABLE_SIZE);
  for(i = 0; i < ha->TABLE_SIZE; i++){

    newPos = sondagemLinear(pos, i, ha->TABLE_SIZE);
    if(ha->itens[newPos] == NULL){
      struct aluno* novo;
      novo = (struct aluno*) malloc(sizeof(struct aluno));
      if(novo == NULL){
        return 0;
      }
      *novo = al;
      ha->itens[newPos] = novo;
      ha->qtd++;
      return 1;
    }
  }
  return 0;
}

Hash* criaHash(int TABLE_SIZE){
  Hash* ha = (Hash*) malloc(sizeof(Hash));
  if(ha != NULL){
    int i;
    ha->TABLE_SIZE = TABLE_SIZE;
    ha->itens = (struct aluno**) malloc(TABLE_SIZE * sizeof(struct aluno*));
    if(ha->itens == NULL){
      free(ha);
      return NULL;
    }
    ha->qtd = 0;
    for(i = 0; i < ha->TABLE_SIZE; i++){
      ha->itens[i] = NULL;
    }
  }
  return ha;
}
