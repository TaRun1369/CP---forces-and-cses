#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n,m;
    cin>>n>>m;

    vector<long long> s(n),r(n),a(n);
    for(long long i = 0;i<n;i++){
        cin>>s[i];
    }
    // for(long long i = 0;i<m;i++){
    //     cin>>r[i];
    // }
    // for(long long i = 0;i<n;i++){
    //     cin>>a[i];
    // }

    long long cap;
    cin>>cap;
    vector<long long> c(cap);
    for(long long i = 0;i<cap;i++){
        cin>>c[i];
    }

    vector<vector<long long>> sorted;
    for(long long i = 0;i<n;i++){
        sorted.push_back({i,max(s[i],r[i])});
    }

    set<long long> st (c.begin(),c.end());
    long long ans = 0;
    for(auto it : sorted){
        if(st.lower_bound(it[1]) != st.end()){
            cout<<it[0]<<" ";
            st.erase(*st.lower_bound(it[1]));
        }
    }
    cout<<ans<<endl;


}