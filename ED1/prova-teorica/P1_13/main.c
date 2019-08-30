#include <stdio.h>
#include <assert.h>

extern int words(const char *in);

int main()
{
    int a, b;

    a = words(NULL);
    b = words("inexistente.txt");

    // Teste #01: a função retorna negativo para o erro "Parâmetro nulo"
    assert(a < 0);

    // Teste #02: a função retorna negativo para o erro "Arquivo inexistente"
    assert(b < 0);

    // Teste #03: os códigos de erro devem ser diferentes
    assert(a != b);

    // Teste #04: Um arquivo que contém apenas espaços não tem nenhuma palavra
    assert(words("spaces.txt") == 0);

    // Teste #05: Primeiro exemplo da prova
    assert(words("one.txt") == 1);

    // Teste #06: Segundo exemplo da prova
    assert(words("two.txt") == 2);

    // Teste #07: Terceiro exemplo da prova
    assert(words("five.txt") == 5);

    // Teste #08: Hino Nacional, sem acentos, cedilhas e pontuações
    assert(words("hino.txt") == 122);

    printf("Ok\n");

    return 0;
}
    
