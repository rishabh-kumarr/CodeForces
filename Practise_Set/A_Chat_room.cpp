#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1 = "hello";
    cin >> s;
    int a = 0, x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s1[a])
        {
            a++;
            x++;
            if (x == 5)
                break;
        }
    }
    if (x == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
