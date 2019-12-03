#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int i = 0;
  int soma = 0;
  while(scanf("%d", &n) && n >= 0){
    i++;
    soma += n;
  }

  double media;
  media = (double)soma/(double)i;
  printf("%.2lf\n", media);
  return 0;
}
