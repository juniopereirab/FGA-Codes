#include <bits/stdc++.h>

using namespace std;

int main(){
  double a, b;

  int N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%lf %lf", &a, &b);
    if(b != 0){
      double div = a / b;
      printf("%.1lf\n", div);      
    }
    else{
      printf("divisao impossivel\n");
    }
  }

}
