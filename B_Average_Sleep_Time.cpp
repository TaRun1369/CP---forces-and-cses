#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
  
void solve() {
    long long n,k;
    cin>>n>>k;
    if(n == 1 && k == 1){
        long long x;
        cin>>x;
        cout<<fixed<<setprecision(10)<<(double)x<<endl;
        return;
    }
    else{
        vector<long long> v(n);
        for(long long i = 0;i<n;i++){
            cin>>v[i];
        }
        long long ans = accumulate(v.begin(),v.begin()+k,0ll);
        long long temp = ans;
        for(long long i = k;i<n ;i++){
            // temp = ans;
            temp += v[i];
            temp -= v[i-k];
            // cout<<"t - "<<temp<<endl;
            ans += temp;
        }
        // cout<<"yaha"<<ans<<endl;
        double d = (double)ans / (double)(n - k + 1);

        cout<<fixed<<setprecision(10)<<d<<endl; 
    }
    
}

long long main() {
    // long long t;
    // cin >> t;
 
    // while (t--) {
        
    //     solve();
 
    // }
    solve();
    return 0;
}
