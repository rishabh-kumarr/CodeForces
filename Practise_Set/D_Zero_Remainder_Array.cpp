#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        map<ll, ll> m;
        ll ans = INT_MIN;
        ll y = 0;
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (x % k == 0)
            {
                y++;
                continue;
            }
            if (m[x % k] == 0)
            {
                m[x % k] = k - x % k;
            }
            else
            {
                m[x % k] = m[x % k] + k;
            }
            ans = max(ans, m[x % k]);
        }
        if (y == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }
    return 0;
}
