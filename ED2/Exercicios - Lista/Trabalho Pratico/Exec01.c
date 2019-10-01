#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
  char hex;
  Node *prev;
  Node *next;
};

struct list{
  Node *head;
  Node *tail;
  unsigned long _size;
};
typedef struct list Lista;

void init(Lista *lista){
  lista->head = lista->tail = NULL;
  lista->_size = 0;
}

void push_back(Lista* lista, char v){
  Node *no;
  no = (Node*)malloc(sizeof(Node));
  no->hex = v;
  no->next = NULL;

  if(lista->head == NULL){
    no->prev = NULL;
    lista->head = lista->tail = no;
  }
  else{
    no->prev = lista->tail;
    lista->tail->next = no;
    lista->tail = no;
  }

  lista->_size++;
}

int pop_back(Lista* lista){
  Node* no;
  char aux;
  if(lista->head == NULL){
    return -1;
  }
  no = lista->tail;
  if(lista->head == lista->tail){
    lista->head = lista->tail = NULL;
  }
  else{
    lista->tail = no->prev;
    lista->tail->next = NULL;
  }
  char v = no->hex;
  free(no);
  lista->_size--;
  return v;
}

void sort_list(Lista *lista){
  Node* aux1, *aux2;
  char v;
  for(aux1 = lista->head; aux1 != NULL; aux1 = aux1->next){
    for(aux2 = aux1->next; aux2 != NULL; aux2 = aux2->next){
      if((aux1->hex) > (aux2->hex)){
        v = aux1->hex;
        aux1->hex = aux2->hex;
        aux2->hex = v;
      }
    }
  }
}

void print_list(Lista *lista){
  Node* aux;
  aux = lista->head;
  while(aux){
    printf("%c\n", aux->hex);
    aux = aux->next;
  }
}



int main(){
  Lista teste;
  init(&teste);

  
  return 0;
}
