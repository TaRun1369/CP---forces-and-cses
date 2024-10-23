#include <bits/stdc++.h>
using namespace std;



long long main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    long long n,m;
    cin >> n>>m;
    vector<long long> ans(n+1,0);
    set<long long> lud;
    for(long long i = 1;i<n+2;i++){
        lud.insert(i);
    }
    while (m--) {
        long long x, y, z;
        cin >> x >> y >> z;

        auto l = lud.lower_bound(x);
        while(*l <= y && l != lud.end() ){
            if(*l != z){
                auto kill = l;
                ans[*l] = z;
                l++;
                lud.erase(kill);
            }
            else l++;
        }
        // remaining code here 
    }
    
    for(long long i = 1;i<=n;i++) cout<<ans[i]<<" ";
    return 0;
}
