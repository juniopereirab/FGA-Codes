#include <bits/stdc++.h>

using namespace std;

int main(){
    stack<int, vector<int>> s;

    int value;
    int n;
    int d;
    int a;

    cin >> value >> n;
    for(int i = 0; i < n; ++i){
        cin >> d >> a;
        if(d == 1){
            s.push(a);
            value += a;
        }
        if(d == 2){
            for(int j = 0; j < a; j++){
                value -= s.top();
                s.pop();
            }
        }
    }

    cout << value << endl;

    return 0;
}