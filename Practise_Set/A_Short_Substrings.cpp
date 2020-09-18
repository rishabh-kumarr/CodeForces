#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int T;
    cin >> T;
    while (T--)
    {
        cin >> b;
        int b1 = b.size();
        for (int i = 0; i < b1; i++)
        {
            if (b1 == 2)
            {
                cout << b;
                break;
            }
            if (i % 2 != 0 || i == 0)
            {
                cout << b[i];
            }
        }
        cout << endl;
    }
    return 0;
}
