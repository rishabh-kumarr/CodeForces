#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a[100], ans = 0, min = 0, s = 0;
    while (cin >> n)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        s = s / 2;
        sort(a, a + n);
        for (i = n - 1; i >= 0; i--)
        {
            ans += a[i];
            min++;
            if (ans > s)
                break;
        }
        cout << min << endl;
    }
    return 0;
}
