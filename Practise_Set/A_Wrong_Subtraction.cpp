#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int k, l;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        l = n % 10;
        if (l != 0)
            n = n - 1;
        else
            n = n / 10;
    }
    cout << n << endl;
    return 0;
}
