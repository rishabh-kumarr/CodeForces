#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    int l, count = 0;
    l = strlen(s);
    sort(s, s + l);
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
