#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int low = 0, up = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            up++;
        if (s[i] >= 'a' && s[i] <= 'z')
            low++;
    }
    for (int i = 0; i < n; i++)
    {
        if (low >= up)
        {
            putchar(tolower(s[i]));
        }
        else
        {
            putchar(toupper(s[i]));
        }
    }
    return 0;
}
