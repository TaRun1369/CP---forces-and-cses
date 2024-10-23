#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;
    long long sum = 0;
    vector<long long> a(n);
    for(long long i = 0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }

    vector<long long> reachable(sum + 1,0);
    reachable[0] = 1;
    for(long long i = 0;i<n;i++){
        for(long long v = sum;v >= a[i];v--){
            reachable[v] |= reachable[v - a[i]];
        }
    }
    long long count = 0;
    for(long long i = 1;i<=sum;i++){
        if(reachable[i])count++;
    }
    cout<<count<<endl;
    for(long long i = 1;i<=sum;i++){
        if(reachable[i]) cout<<i<<" ";
    }
}