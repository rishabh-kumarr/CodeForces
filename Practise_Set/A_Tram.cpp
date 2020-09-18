#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, i = 0, j = 0;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        i -= a;
        i += b;
        if (i > j)
            j = i;
    }
    cout << j << endl;
    return 0;
}
