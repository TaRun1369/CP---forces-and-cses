#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> log(n),ghar(m);
    

    for(long long i = 0;i<n;i++){
        cin>>log[i];
    }
    for(long long i = 0;i<m;i++){
        cin>>ghar[i];
    }

    sort(log.begin(),log.end());
    sort(ghar.begin(),ghar.end());

    long long i = 0, j = 0,ans = 0;
    while(i < n && j < m){
        long long diff = log[i] - ghar[j];
        if(abs(diff) <= k){
            ans++;
            i++;
            j++;
        }
        else{
            if(log[i] > ghar[j]){
                j++;
            }
            else{
                i++;
            }
        }
    }

    cout<<ans<<endl;

}