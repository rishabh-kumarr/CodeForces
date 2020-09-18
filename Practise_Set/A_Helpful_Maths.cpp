#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    string s;
    int temp, a[1000], count = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            a[count++] = s[i] - '0';
        }
    }
    sort(a, a + count);
    for (int i = 0; i < count; i++)
    {
        cout << a[i];
        if (i == count - 1)
        {
            break;
        }
        cout << "+";
    }
    return 0;
}
