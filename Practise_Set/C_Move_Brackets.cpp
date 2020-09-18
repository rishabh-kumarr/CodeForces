#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            a++;
        else
            a--;
        if (s[i] == ')' && a < 0)
        {
            ans++;
            a++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
