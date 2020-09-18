#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, w, b = 0;
    long long n;
    cin >> k >> w >> n;
    for (int i = 1; i <= n; i++)
    {
        w = w - (i * k);
        if (w <= 0)
        {
            b = abs(w);
        }
    }
    cout << b << endl;
    return 0;
}
