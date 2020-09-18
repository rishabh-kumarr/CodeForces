#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t, count = 0;
    cin >> t;
    while (t--)
    {
        long long n, c = 0;
        cin >> n;
        while (n > 1)
        {
            ++c;
            (n % 6) ? n *= 2 : n /= 6;
        }
        cout << (n == 1 ? c : -1) << endl;
    }
}
