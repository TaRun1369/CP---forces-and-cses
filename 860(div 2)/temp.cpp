#pragma GCC optimize("ofast")
#pragma GCC target('sse,sse2,sse3,ssse3,sse4,popcnt,abn,mmx,avx,avx2,fma')
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
// using namespace __gnu_pbds;

typedef long long ll;

#define vi vector<long long>
#define vii vector<vector<long long>>
#define pi pair<long long, long long>
#define mi map<long long, long long>
#define si set<long long>
#define rep(var, l, r) for (long long var = l; var <= r; var++)
#define repr(var, l, r) for (long long var = r; var >= l; var--)
long long mod1 = 1000000007;
long long mod2 = 998244353;

void solve()
{
    long long l, r;
    cin >> l >> r;
    vector<long long> ans;
    vector<long long> input;
    rep(i, l, r)
    {
        long long a = i;
        input.push_back(a);
    }
    rep(i, l, r)
    {

        long long max = long long_MIN;
        long long min = long long_MAX;
        long long q = i;
        long long j = 1;
        long long rem = 0;

        while (q != 0)
        {

            rem = q % 10;

            if (rem > max)
            {
                max = rem;
            }
            if (rem < min)
            {
                min = rem;
            }
            q = i / 10;
            // j++;
        }
        ans.push_back(abs(max - min));
    }
    cout << input[distance(ans.begin(), max_element(ans.begin(), ans.end()))] << endl;
}

using namespace std;

long long main()
{
    long long tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
