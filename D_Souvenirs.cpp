#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long n,m;
    cin>>n>>m;
     vector<long long> nw(n),mw(m);
     for(long long i = 0;i<n;i++){    
        cin>>nw[i];
     }
     for(long long j = 0;j<m;j++){
        cin>>mw[j];
     }
     long long ans = 0;
     sort(nw.begin(),nw.end());
     sort(mw.begin(),mw.end());
    long long i = 0,j = 0;
     while(i < n && j < m){
        // cout<<nw[i]<<" - nw  and mw - "<<mw[j]<<endl;
        if(mw[j] <= nw[i]){
            
            ans += nw[i];
            j++;
            i++;
            // cout<<ans<<endl;
        }
        else{
            i++;
        }
     }

     if(j == m){
        cout<<ans<<endl;
     }
     else cout<<-1<<endl;
}
