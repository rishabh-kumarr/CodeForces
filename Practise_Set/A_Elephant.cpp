#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int st = 0;
    st += x / 5;
    x %= 5;
    st += x / 4;
    x %= 4;
    st += x / 3;
    x %= 3;
    st += x / 2;
    x %= 2;
    st += x / 1;
    x %= 1;
    cout << st << endl;
    return 0;
}
