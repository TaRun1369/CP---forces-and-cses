#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
long long main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin>>n;
        vector<long long> v(n);
        for(long long i = 0;i<n;i++) cin>>v[i];
        long long maxi = long long_MAX;
        for(long long i = 0;i<n-1;i++){
            maxi =  min(maxi,max(v[i],v[i+1]));
        }
        cout<<maxi - 1<<endl;
        
    }
    return 0;
}
