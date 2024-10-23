#include<bits/stdc++.h>
using namespace std;
#define long long long long
long long n,q;

long long32_t main(){
    cin>>n>>q;
    long long m = 30;
    vector<vector<long long>> st(m+1,vector<long long>(n+1,-1));
    for(long long i = 1;i<=n;i++){
        cin>>st[0][i];
    }

    for(long long i = 1;i<=m;i++){
        for(long long j = 1;j<=n;j++){
            st[i][j] = st[i-1][st[i-1][j]];
        }
    }

    while(q--){
        long long a,b;
        cin>>a>>b;
        long long f = 1;
        if(a == b){
            cout<<0<<endl;
            continue;
        }
        for(long long i = 0;i<=m;i++){
            
            if(st[i][a] == b) {
                cout<<pow(2,i)<<endl;
                f = 0;
                break;
            }
        }
        if(f == 1)
        cout<<-1<<endl;
    }


}
