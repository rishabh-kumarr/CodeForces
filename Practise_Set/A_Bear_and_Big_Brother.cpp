#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, y;
    cin >> a >> b;
    for (int i = 1; a <= b; i++)
    {
        a = a * 3;
        b = b * 2;
        if (a > b)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
