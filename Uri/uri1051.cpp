#include <bits/stdc++.h>

using namespace std;

int main(){
    double n;
    double imp = 0;

    cin >> n;

    if(n <= 2000.00){
        cout << "Isento" << endl;
        return 0;
    }
    else if(n > 2000.00 && n <= 3000.00){
        imp = n - 2000.00;
        imp = imp * 0.08;
    }
    else if(n > 3000.00 && n <= 4500.00){
        imp = n - 3000.00;
        imp = imp * 0.18;
        int aux = 1000 * 0.08;

        imp = imp + aux; 
    }
    else if(n > 4500.00){
        imp = n - 4500.00;
        imp = imp * 0.28;
        int aux1 = 1500 * 0.18;
        int aux2 = 1000 * 0.08;

        imp = imp + aux1 + aux2;
    }

    cout << fixed;
    cout.precision(2);
    cout << "R$ " << imp << endl;
    return 0;
}