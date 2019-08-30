#include <stdio.h>
#include <string.h>

#define MAX 10000000

char cidade[MAX][26];
char aux[26];
int i = 0;
int troca = 0;
int a = 0;
void switch_city(int x){
  int y = a-1;
  strcpy(aux, cidade[x]);
  for(int y = x+1; y < a; y++){
    strcpy(cidade[y-1], cidade[y]);
  }
  strcpy(cidade[y], aux);
  i -= 1;
  troca += 1;
}

int main(){

    while(scanf("%s", cidade[i]) == 1){
      i++;
    }
    a = i;
    for(int f = 1; f < i; f++){
      int len = strlen(cidade[f-1]);
      if(cidade[f][0] == 'A' && cidade[f-1][len-1] == 'a'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'B' && cidade[f-1][len-1] == 'b'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'C' && cidade[f-1][len-1] == 'c'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'D' && cidade[f-1][len-1] == 'd'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'E' && cidade[f-1][len-1] == 'e'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'F' && cidade[f-1][len-1] == 'f'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'G' && cidade[f-1][len-1] == 'g'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'H' && cidade[f-1][len-1] == 'h'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'I' && cidade[f-1][len-1] == 'i'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'J' && cidade[f-1][len-1] == 'j'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'K' && cidade[f-1][len-1] == 'k'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'L' && cidade[f-1][len-1] == 'l'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'M' && cidade[f-1][len-1] == 'm'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'N' && cidade[f-1][len-1] == 'n'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'O' && cidade[f-1][len-1] == 'o'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'P' && cidade[f-1][len-1] == 'p'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'Q' && cidade[f-1][len-1] == 'q'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'R' && cidade[f-1][len-1] == 'r'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'S' && cidade[f-1][len-1] == 's'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'T' && cidade[f-1][len-1] == 't'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'U' && cidade[f-1][len-1] == 'u'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'V' && cidade[f-1][len-1] == 'v'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'W' && cidade[f-1][len-1] == 'w'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'X' && cidade[f-1][len-1] == 'x'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'Y' && cidade[f-1][len-1] == 'y'){
        switch_city(f);
      }
      else if(cidade[f][0] == 'Z' && cidade[f-1][len-1] == 'z'){
        switch_city(f);
      }
    }

    i += troca;
    for(int f = 0; f < i; f++){
      printf("%s\n", cidade[f]);
    }

    return 0;
}
