#include <stdio.h>

#define MAX 1000

int main(){
    int v[MAX];
    int i = 0;

    while(scanf("%d", &v[i]) == 1){
      i++;
    }

    for(int j = 1, a; j < i; ++j){
      int x = v[j];
      for(a = j; a && v[a-1] > x; --a){
        v[a] = v[a-1];
      }
      v[a] = x;
    }

    for(int f = 0; f < i; f++){  
      if(f == i-1){
        printf("%d", v[f]);
      }
      else{
        printf("%d ", v[f]);
      }
    }
    printf("\n");

    return 0;
}
