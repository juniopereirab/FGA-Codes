#include <stdio.h>
#include <stdlib.h>

struct node{
  unsigned long me;
  unsigned long prev;
  unsigned long next;
};

typedef struct node Node;

void push(Node lista[], unsigned long a, unsigned long b, unsigned long c){

}


int main(){
  unsigned long a, b, c;
  Node lista[250000];
  int i = 0;

  int x = scanf("%ld %ld %ld", &a, &b, &c);
  printf("%d\n", x);

  printf("Testando\n");

  while(scanf("%ld %ld %ld", &lista[i].me, &lista[i].prev, &lista[i].next) == 0){
    i++;
  }
  printf("Testando\n");

  for(int j = 0; j < i; j++){
    printf("Me = %ld", lista[j].me);
    printf("Prev = %ld", lista[j].prev);
    printf("Next = %ld", lista[j].next);
  }
  return 0;
}
