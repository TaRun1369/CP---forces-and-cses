
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;



long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
        long long n,m;
        cin>>n>>m;
        unsigned long long ans = 0;
        vector<vector<long long>> v(n,vector<long long>(m));
        vector<vector<long long>> edata(n,vector<long long>(m));
        for(long long i=0;i<n;i++){
            for(long long j=0;j<m;j++){
                cin>>v[i][j];
            }
        }

        // for(long long i=0;i<n;i++){
        //     for(long long j=0;j<m;j++){
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        

        for(long long j = 0;j<m;j++){
            vector<long long> x;
            for(long long i = 0;i<n;i++){
                x.push_back(v[i][j]);
            }
            sort(x.begin(),x.end());
            
            // for(long long i = 0;i<n;i++){
            //     edata[i][j] = x[i];
            // }
            long long mul = n - 1;
            for(long long i = 0;i<n;i++){
                ans += static_cast<long long>(x[i])*(mul);
                mul -=2;
            }

        }

    cout<<(ans)*(-1)*(1ll)<<endl;
        
    }
    return 0;
}