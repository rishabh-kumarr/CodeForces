#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, side;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        side = min(max(a * 2, b), max(a, b * 2));
        cout << side * side << endl;
    }
    return 0;
}
