#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, h, m, s, d2, h2, m2, s2;

    int inicio, fim, duracao;

    char buffer[10];

    scanf("%s%d", buffer, &d);
    scanf("%d%s%d%s%d", &h, buffer, &m, buffer, &s);
    scanf("%s%d", buffer, &d2);
    scanf("%d%s%d%s%d", &h2, buffer, &m2, buffer, &s2);

    inicio = (d * 86400) + (h * 3600) + (m * 60) + s;
    fim = (d2 * 86400) + (h2 * 3600) + (m2 * 60) + s2;

    duracao = fim - inicio;

    cout << duracao/86400 << " dia(s)" << endl;
    cout << (duracao%86400)/3600 << " hora(s)" << endl;
    cout << ((duracao%86400)%3600)/60 << " minuto(s)" << endl;
    cout << ((duracao%86400)%3600)%60 << " segundo(s)" << endl;


    return 0;
}
