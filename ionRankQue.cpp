#include<bits/stdc++.h>
using namespace std;

long long main(){
    long long n,k;
    cin>>n>>k;

    vector<long long> a;
    for(long long i = 0;i<n;i++){
        long long aa;
        cin>>aa;
        if(aa != 0) a.push_back(aa);
    }

    // sort(a.begin(),a.end());
    cout<<min(long long(a.size()),k)<<endl;;

    
}
