#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  char email[1000][100];
  char aux;
  int j = 0;

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    while(scanf("%c", &aux) == 1){
      email[i][j] += aux;
      j++;
    }
    j = 0;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; email[i][j] != '\n'; j++){
      printf("%c", email[i][j]);
    }
  }

  return 0;
}
