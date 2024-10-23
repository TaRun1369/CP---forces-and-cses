#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

long long main() {
    long long t;
    cin>>t;
    while(t--){
    long long n,m,k;
    cin >> n>>m>>k;
    vector<long long> a(n),b(m);
    long long one= 0 , two = 0;
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    for(long long i=0;i<m;i++){
        cin>>b[i];
    }
long long ans = 0;
    for(long long i= 0;i<n;i++){
        for(long long j = 0;j<m;j++){
            if(a[i]+b[j] <= k){
                ans++;
            }
        }
    }

    
cout<<ans<<endl;
    }
    

    return 0;
}
