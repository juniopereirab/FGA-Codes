#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

extern vector<int> merge(const vector<int>& a, const vector<int>& b);

int main()
{
    vector<int> a { 4, 5 }, b { };

    // Teste #01: primeiro exemplo da prova
    auto z = merge(a, b);
    assert(z == a);

    // Teste #02: segundo exemplo da prova
    b = vector<int>({ 1, 2, 3 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 2, 3, 4, 5 }));

    // Teste #03: terceiro exemplo da prova
    a = vector<int>({ 1, 3, 5 });
    b = vector<int>({ 2, 4, 6 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 2, 3, 4, 5, 6 }));

    // Teste #04: a vazio
    a = vector<int>({ });
    z = merge(a, b);

    assert(z == b);

    // Teste #05: ambos vazios
    a = vector<int>({ });
    b = vector<int>({ });
    z = merge(a, b);

    assert(z.empty());

    // Teste #06: todos elementos iguais
    a = vector<int>({ 1, 1, 1, 1 });
    b = vector<int>({ 1, 1, 1 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 1, 1, 1, 1, 1, 1 }));

    // Teste #07: todos elementos iguais em cada vetor
    a = vector<int>({ 2, 2, 2 });
    b = vector<int>({ 1, 1, 1 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 1, 1, 2, 2, 2 }));

    // Teste #08: valores intercalados
    a = vector<int>({ 2, 3, 5, 7 });
    b = vector<int>({ 1, 4, 6, 8, 9, 10 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }));

    // Teste #09: valores intercalados, com repetição
    a = vector<int>({ 2, 3, 3, 4, 4, 4, 5, 5 });
    b = vector<int>({ 1, 2, 3, 4, 5, 5, 5 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5 }));

    // Teste #10: ambos com um único elemento
    a = vector<int>({ 2 });
    b = vector<int>({ 1 });
    z = merge(a, b);

    assert(z == vector<int>({ 1, 2 }));

    // Teste #11: valores negativos
    a = vector<int>({ -6, -3, -1 });
    b = vector<int>({ -5, -4, -2 });
    z = merge(a, b);

    assert(z == vector<int>({ -6, -5, -4, -3, -2, -1 }));

    // Teste #12: zeros
    a = vector<int>({ 0, 0, 0 });
    b = vector<int>({ 0, 0 });
    z = merge(a, b);

    assert(z == vector<int>({ 0, 0, 0, 0, 0 }));

    cout << "Ok\n";

    return 0;
}
