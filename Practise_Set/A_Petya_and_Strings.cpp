#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int x = 0, i, o, l;
    char a[200], b[200];
    cin >> a >> b;
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        o = a[i] - b[i];
        if (o != 0 && o != 32 && o != -32)
        {
            if (a[i] <= 'z' && b[i] <= 'z' && a[i] >= 'a' && b[i] >= 'a')
            {
                if (a[i] > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
            if (a[i] <= 'Z' && b[i] <= 'Z' && a[i] >= 'A' && b[i] >= 'A')
            {
                if (a[i] > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
            if (a[i] <= 'Z' && a[i] >= 'A' && b[i] <= 'z' && b[i] >= 'a')
            {
                if (a[i] + 32 > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
            if (a[i] <= 'z' && a[i] >= 'a' && b[i] <= 'Z' && b[i] >= 'A')
            {
                if (a[i] - 32 > b[i])
                {
                    x = 1;
                    break;
                }
                else
                {
                    x = -1;
                    break;
                }
            }
        }
    }
    printf("%d\n", x);
    return 0;
}
