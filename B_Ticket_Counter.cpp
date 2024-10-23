#include<bits/stdc++.h>
using namespace std;



long long main(){
    long long n,a;
    cin>>n>>a;

    long long currtime = 0;
    for(long long i = 0;i<n;i++){
        long long x;
        cin>>x;
        currtime = max(x,currtime);
        currtime += a;
        cout<<currtime<<endl;
    }
}