#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, d;
  int duracaoh, duracaom;


  cin >> a >> b >> c >> d;

  if(a < c){
    duracaoh = c - a;
    if(duracaoh == 1){
      duracaoh = 0;
    }
  }
  if(b < d){
    duracaom = d - b;
  }
  if(a == c){
    duracaoh = 24;
  }
  if(b == d){
    duracaom = 0;
  }
  if(a > c){
    duracaoh = (c + 24) - a;
  }
  if(b > d){
    duracaom = 60 - (b - d);
  }

  cout << "O JOGO DUROU " << duracaoh << " HORA(S) E " << duracaom << " MINUTO(S)" << endl;
  return 0;
}
