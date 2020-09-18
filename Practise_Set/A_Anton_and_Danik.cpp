#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else if (s[i] == 'D')
            d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    if (d > a)
        cout << "Danik" << endl;
    if (a == d)
        cout << "Friendship" << endl;
    return 0;
}
