#include <bits/stdc++.h>

using namespace std;

int main(){

  int N;
  scanf("%d", &N);

  int num  = 0;
  char cobaia;
  int total = 0;
  int totalC = 0;
  int totalR = 0;
  int totalS = 0;

  double perC, perR, perS;

  for(int i = 0; i < N; i++){
    scanf("%d %c", &num, &cobaia);
    total += num;
    if(cobaia == 'C'){
      totalC += num;
    }
    else if(cobaia == 'R'){
      totalR += num;
    }
    else if(cobaia == 'S'){
      totalS += num;
    }
  }

  perC = ((double)totalC * 100.0)/(double)total;
  perR = ((double)totalR * 100.0)/(double)total;
  perS = ((double)totalS * 100.0)/(double)total;

  printf("Total: %d cobaias\n", total);
  printf("Total de coelhos: %d\n", totalC);
  printf("Total de ratos: %d\n", totalR);
  printf("Total de sapos: %d\n", totalS);
  printf("Percentual de coelhos: %.2lf %%\n", perC);
  printf("Percentual de ratos: %.2lf %%\n", perR);
  printf("Percentual de sapos: %.2lf %%\n", perS);

  return 0;
}
