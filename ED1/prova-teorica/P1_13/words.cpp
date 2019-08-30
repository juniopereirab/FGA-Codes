#include <fstream>

using namespace std;

int words(const char *in)
{
    if (!in)
        return -1;

    ifstrem f(in);

    if (!f)
        return -2;

    int total = 0;
    string word;

    while (cin >> word)
        ++total;

    f.close();
}
