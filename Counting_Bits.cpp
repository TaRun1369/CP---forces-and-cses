
#include <bits/stdc++.h>
using namespace std;
 
map<long long,long long> dp;
long long f(long long a){
    if(a == 0) return 0;
    if(dp[a]) return dp[a];

    if(a & 1) return dp[a] = 2*f(a/2) + (a/2) + 1;
    else return dp[a] = f(a/2) + f(a/2 - 1) + (a/2);

}
long long main() {
    long long a;
    cin >> a;
    cout<<f(a);

}
