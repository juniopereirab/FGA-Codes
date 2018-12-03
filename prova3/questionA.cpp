#include<bits/stdc++.h>

using namespace std;


int main(){
    int p;
    int s;
    int t;
    int n;
    cin >> p >> s >> t;
    cin >> n;
    int a=0, b=0;
    a += p;
    a += s;
    a += n*t;
    a += n*p;

    b += 2*p;
    b += s;
    b += n*t;
    b += 2*n*p;

    double result;
    result = 100.0-a *100.0/b;

    cout << fixed;
    cout.precision(2);
    cout << result << endl;

    return 0;
}