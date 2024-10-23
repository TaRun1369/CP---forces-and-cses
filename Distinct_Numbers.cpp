#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n;
    cin>>n;

    map<long long,long long>mp;

    for(long long i = 0;i<n;i++){
        long long it;
        cin>>it;
        mp[it]++;
    }

    cout<<mp.size();
}