#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, count = 0;
    cin >> n;
    int p[n], q[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
        if (q[i] - p[i] >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
