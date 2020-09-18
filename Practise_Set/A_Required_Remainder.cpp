#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, k, r;
        cin >> x >> y >> n;
        r = n % x;
        if (r < y)
            k = n - x + (y - r);
        else
            k = n - (r - y);
        cout << k << endl;
    }
    return 0;
}
