#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int flag;
    priority_queue< pair<long long, long long> > fila;
    while(n--){
        cin >> flag;
        if(flag==1){
            int id, m, r;
            cin >> id >> m >> r;
            int rend=r*1e4/m;
            fila.emplace(-rend, -id);
        }else{
            auto aux = fila.top();
            cout << -aux.second << endl;
            fila.pop();
        }
    }

    return 0;
}