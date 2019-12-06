#include <bits/stdc++.h>

using namespace std;

int contador;

double bisseccao(int x, int E)
{
    double a, b;
    float e = pow(10, -E);
    cout << e << endl;
    // passo 1: achar a0 e b0
    b = x/2;
    while(b*b > x)
    {
        b--;
    }
    b++;
    a = b-1;

    //passo 2: encontrar b1 tal que x = a1 * b1
    while( a - b <= e)
    {
        if(contador >= 100)
        {
            return 0;
        }
        a = (a + b)/2;
        b = x/a;
        contador++;
        cout << contador << endl;
    }
    return a;
}

int main()
{
    int x, E;
    cin >> x >> E;
    double raiz = bisseccao(x, E);
    if (x <= 1 || E < 1 || E > 16)
    {
        cout << "Entradas inválidas.";
    }
    else if (raiz == 0){
      cout << "Nao foi possivel calcular sqrt(" << x << ").";
    }
    else{
      cout << "A raiz quadrada de " << x << " eh " << raiz << ", calculada em " << contador << " iteracoes" <<  endl;
    }

    return 0;
}
