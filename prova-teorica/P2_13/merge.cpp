#include <vector>

using namespace std;

vector<int> merge(const vector<int>& a, const vector<int>& b)
{
    int N = a.size(), M = b.size(), i = 0, j = 0;
    vector<int> c;

    while (i < N and j < M)
        a[i] < b[j] ?  c.push_back(a[i++]) : c.push_back(b[j++]);

    while (i < N)
        c.push_back(a[i++]);

    while (j < M)
        c.push_back(b[j++]);

    return c;
}
