#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int i, n, m;
    char s[50000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", &s);
        int l = strlen(s);
        if (l > 10)
        {
            printf("%c", s[0]);
            printf("%d", l - 2);
            printf("%c\n", s[l - 1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
    return 0;
}
