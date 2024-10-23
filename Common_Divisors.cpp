#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;

    long long maxx = 1e6 ;
    vector<long long> mkc(1e6 + 1,0);

    for(long long i = 0;i<n;i++){
        long long x;cin>>x;
        mkc[x]++;
    }

    for(long long i = maxx;i>=1;i--){
        long long count = 0;
        for(long long j = i;j<=maxx;j+=i){
            count += mkc[j];
        }

        if(count > 1){
            cout<<i<<endl;
            return 0;
        }
    }
}