#include <bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> merge(const vector<int>& a, const vector<int>& b)
{
  vector<int> z;

    for (size_t i = 0; i < a.size(); ++i)
    z.push_back(a[i]);

    for (size_t i = 0; i < b.size(); ++i)
    z.push_back(b[i]);

    int N = z.size();

    for (int j = 0; j < N; j++) {
      int m = j;

      for (int k = j + 1; k < N; k++) {
        if (z[k] < z[m]) {
          m = k;
        }
      }

      if (z[j] != z[m]) {
        int aux;
        aux = z[j];
        z[j] = z[m];
        z[m] = aux;
      }

    }

return z;
}