#include <bits/stdc=++.h>

using namespace std;

int main(){
    int d, h, m, s, d2, h2, m2, s2;

    int dia, hora, min, seg;

    cin >> d;
    cin >> h >> m >> s;
    cin >> d2;
    cin >> h2 >> m2 >> s2;

    if(d == d2){
        dia = 0;
    }
    else{
        dia = d2 - d;
    }
    if(h == h2){
        hora = 0;
    }
    else if(h2 < h){
        int aux = h - h2;
        hora = 24 - aux;
    }
    else{
        hora = h2 - h;
    }
    if(m == m2){
        min = 0;
    }
    else if(m2 > m){
        min = m2 - m;
    }
    else{
        int aux = m - m2;
        min = 60 - aux;
    }
    if(s == s2){
        seg = 0;
    }
    else if(s2 > s){
        seg = s2 - s;
    }
    else{
        int aux = s - s2;
        seg = 60 - aux;
    }

    cout << hora << " Hora(s)" << endl;
    cout << 
    

    return 0;
}