#include <bits/stdc++.h>

using namespace std;

int main(){
  int n = 0;
  int x = 0;
  int y = 0;
  int aux = 0;

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &aux);
    if(aux >= 10 && aux <= 20){
      x++;
    }
    else{
      y++;
    }
  }

  printf("%d in\n%d out\n", x, y);
  return 0;
}
