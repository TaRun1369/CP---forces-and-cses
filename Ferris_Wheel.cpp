#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n,m;
    cin>>n>>m;
    vector<long long> log(n);
    

    for(long long i = 0;i<n;i++){
        cin>>log[i];
    }
    
    sort(log.begin(),log.end());
    long long lower = lower_bound(log.begin(),log.end(),m) - log.begin();
    long long ans = log.size() - lower;
    long long j = lower - 1;
    long long i = 0;
    // cout<<"ans - "<<ans<<endl;

    while(i <= j){
        // cout<<"ele  - "<<log[j]<<endl;
        if(log[i] + log[j] <= m){
            ans++;
            i++;
            j--;
        }
        else{
            j--;
            ans++;
        }
    }
    cout<<ans <<endl;

}