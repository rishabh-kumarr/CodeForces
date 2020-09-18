#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s, s1;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
            continue;
        else
        {
            cout << "." << ch;
        }
    }
    cout << s1;
    return 0;
}
