#include <bits/stdc++.h>

using namespace std;

int main(){
  forward_list<int> list;

  cout << "Lista vazia? " << (list.empty() ? "Sim" : "Não") << endl;

  for(int n = 1; n <= 10; ++n){
    list.push_front(n);
  }

  list.pop_front();

  int size = distance(list.begin(), list.end());
  cout << "Tamanho da lista: " << size << endl;

  cout << "Primeiro elemento: " << list.front() << endl;

  int last = -1;

  for(auto it = list.begin(); it != list.end(); ++it){
    last = *it;
  }

  cout << "Último elemento: " << last << endl;


  return 0;
}
