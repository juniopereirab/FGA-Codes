#include <bits/stdc++.h>

using namespace std;

template<typename T>
void bubble_sort(vector<T>& as){
  int N = as.size();

  for(int i = 0; i < N - 1; i++){
    for(int j = i+1; j < N; j++){
      if(as[j] < as[i]){
        swap(as[i], as[j]);
      }
    }
  }
}

int main(){
  vector<int> as = {3, 5, 1, 2, 4};

  bubble_sort<int>(as);

  for(size_t i = 0; i < as.size(); ++i){
    cout << as[i] << (i + 1 == as.size() ? '\n' : ' ');
  }

  return 0;
}
