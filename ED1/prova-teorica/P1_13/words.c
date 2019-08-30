#include <stdio.h>

int words(const char *in)
{
    FILE *f = NULL;

    if (!in)
        return -1;

    f = fopen(in, "r");

    if (!f)
        return -2;

    int total = 0;
    char word[4096];

    while (fscanf(f, "%s", word) == 1)
        total += 1;

    fclose(f);

    return total;
}
