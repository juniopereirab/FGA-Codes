#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;
  scanf("%d", &N);
  double a = 0.0, b = 0.0, c = 0.0;
  double media = 0.0;
  for(int i = 0; i < N; i++){
      scanf("%lf %lf %lf", &a, &b, &c);
      media = (a*2.0 + b*3.0 + c*5.0)/10.0;
      printf("%.1lf\n", media);
  }
  return 0;
}
