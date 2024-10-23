#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long n;
    cin>>n;
    long long diff = 0,tot = 0;
    vector<long long> hash (26,0);
    for(long long i = 0;i<26;i++){
        long long a;
        cin>>a;
        hash[i] = a;
        tot += a;
        if(hash[i] > 0) diff++;
    }
    long long ans = 0;
    // for(long long i = 0;i<26;i++){
    //     if(hash[i] == 0) continue;
    //     ans += (hash[i]*(hash[i]-1))/2;
    // }
    // ans += (diff*(diff-1))/2;
    // cout<<ans<<endl;
    for(long long i = 0;i<26;i++){
        if(hash[i] == 0) continue;      11
    for(long long j = 1,j<= min(n,tot);j++ ){
         
    }
    
    
    }
}
