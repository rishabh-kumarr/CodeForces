#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int count = 0;
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            count++;
        n = n / 10;
    }
    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
