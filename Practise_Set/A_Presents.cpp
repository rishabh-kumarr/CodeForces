#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

typedef long double LD;
typedef long long ll;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPD(i, n) for (int i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define remax(a, b) a = max(a, b)
#define remin(a, b) a = min(a, b)
#define all(v) v.begin(), v.end()
#define PQ(type) priority_queue<type>
#define PQD(type) priority_queue<type, vector<type>, greater<type>>
#define WL(t) while (t--)
#define SZ(x) ((int)(x).size())
#define runtime() ((double)clock() / CLOCKS_PER_SEC)
#define PRECISION(x) cout << fixed << setprecision(x);
#define FLSH fflush(stdout)
#define inrange(i, a, b) ((i >= min(a, b)) && (i <= max(a, b)))
#define FAST_IO              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solvethetestcase();

signed main()
{
    // comment when using scanf,printf
    FAST_IO

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("error.txt", "w", stderr);
    //     freopen("output.txt", "w", stdout);
    // #endif

    int t = 1;
    // (UNCOMMENT FOR MULTIPLE TEST CASES)
    // cin >> t;
    FOR(testcase, 1, t + 1)
    {
        // (UNCOMMENT FOR CODEJAM) \ 
        printf("Case #%lld: ",testcase);
        solvethetestcase();
    }
    // cerr << "time taken : " << runtime() << " secs" << endl;
}

int n;

void solvethetestcase()
{
    cin >> n;
    int x;
    vi f(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        f[x] = i;
    }
    cout << f[1];
    for (int i = 2; i <= n; ++i)
    {
        cout << ' ' << f[i];
    }
    cout << endl;
}
