#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
  
void solve() {
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long sum = 0;
    long long maxi = 0,secondmaxi = 0;
    for(long long i = 0;i<n;i++)
    {
        cin>>v[i];
        sum += v[i];
        if(v[i] > maxi){
            secondmaxi = maxi;
            maxi = v[i];
        }
        else {
            secondmaxi = max(secondmaxi,v[i]);
        }
    }
    // cout<<"maxi = "<<maxi<<endl;
    // cout<<"second - "<<secondmaxi<<endl;
    vector<long long> ans;
    for(long long i = 0;i<n;i++){
        long long tem = sum - v[i];
        if(v[i] == maxi){
            if(secondmaxi*2*1LL == tem){
                ans.push_back(i);
            }

        }
        else{
            if(maxi*2*1LL == tem){
                ans.push_back(i);
            }
        }
    }

    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i+1<<" ";
    }
    cout<<endl;

        
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
