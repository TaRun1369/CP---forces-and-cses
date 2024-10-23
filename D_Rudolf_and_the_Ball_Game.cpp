#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

void recur(vector<long long> &dp , long long i, long long n, vector<pair<long long,char>> &v,long long ind,long long m){
    if( ind == m){
        return;
    }
    dp[i] = 1;
    cout<<i<<endl;
    long long kitna = v[ind].first;
    char dir = v[ind].second;
    // long long  banegakya = 
    cout<<"i : "<<i<<" "<<"ind : "<<ind<<" "<<"dir : "<<dir<<" "<<"kitna : "<<kitna<<"\n";
    if(dir == '?'){
        recur(dp,(i+kitna)%n,n,v,ind+1,m);
        recur(dp,(i-kitna + n)%n,n,v,ind+1,m);
    }
    else{
        if(dir == '1'){
            recur(dp,(i-kitna + n)%n,n,v,ind+1,m);
        }
        else{
            recur(dp,(i+kitna)%n,n,v,ind+1,m);
        }
    }

}

long long main() {
    long long t;
    cin>>t;
    while(t--){
    long long n,m,k;
    cin >> n>>m>>k;
    vector<long long> dp(n,0);
    vector<pair<long long,char> > v;
        for(long long i = 0 ;i<m;i++){
            long long x;
            cin>>x;

            char ch;
            cin>>ch;
            v.push_back({x,ch});
        }

        recur(dp,k-1,n,v,0,m);
        long long count = accumulate(dp.begin(),dp.end(),0);
        cout<<count<<endl;
        for(long long i = 0 ;i<n;i++){
            if(dp[i] == 1){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }

    

    return 0;
}
