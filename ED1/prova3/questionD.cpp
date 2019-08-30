#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, z;
    int m, n;
    int fome;
    int t = 0;

    cin >> x >> y >> z;
    cin >> m >> n;
    char en[n];
    
    for(int i = 0; i < n; ++i){
        cin >> en[i];
    }
    fome = 0;
    for(int j=0; j<n; ++j){
        if(en[j] == 'F'){
            fome += x;
        }
        if(en[j] == 'A'){
            fome += y;
        }
        if(en[j] == 'R'){
            fome += z;
        }
    }

    t = fome/m;
    int aux = fome % m;
    if(aux != 0){
        t++;
    }
    cout << t << endl;

    return 0;
}