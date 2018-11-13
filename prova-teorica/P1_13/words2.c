#include <stdio.h>

int words(const char *in)
{
    FILE *f = NULL;

    if (!in)
        return -1;

    f = fopen(in, "r");

    if (!f)
        return -2;

    int total = 0, lidos = 0;
    char c;

    do {
        c = fgetc(f);

        if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
            ++lidos;
        else {
            if (lidos)
                total += 1;
            lidos = 0;
        }
    } while (c != EOF);

    fclose(f);

    return total;
}
