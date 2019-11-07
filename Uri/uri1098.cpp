#include <bits/stdc++.h>

using namespace std;

int main(){

  for(double i = 0.0; i < 2.0;){
    for(double j = 1; j <= 3;){
      if( i==0 || (i>0.9 && i<1.1) || (i>1.9 && i<2.1) || (i>2.9 && i<3.1) ){
          printf("I=%.0lf J=%.0lf\n", i, j+i);
      }
      else{
          printf("I=%.1lf J=%.1lf\n", i, j+i);
      }
      j += 1.0;
    }
    i += 0.2;
  }
  return 0;
}
