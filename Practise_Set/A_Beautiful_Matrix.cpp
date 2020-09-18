#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int a, b, s[5][5], ans;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i][j] == 1)
            {
                a = i + 1;
                b = j + 1;
            }
        }
    }
    ans = abs(a - 3) + abs(b - 3);
    cout << ans << endl;
    return 0;
}
