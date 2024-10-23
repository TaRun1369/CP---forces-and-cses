#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long a;
    cin>>a;
    vector<long long> ip(a);
    for(long long i =0;i<a;i++) cin>>ip[i];
    sort(ip.begin(),ip.end());
    vector<long long> v,v1;
    long long i = 0;
    for(auto x : ip){
        if(i % 2 == 0){
            v.push_back(x);
        }
        else{
            v1.push_back(x);
        }
        i++;
    }
    reverse(v1.begin(),v1.end());
    long long ans = 0;
    for(long long i = 0;i<v.size()-1;i++){
        ans += (v[i] + v[i+1]);

    }
    ans += v[v.size()-1] + v1[0];
    for(long long i = 0;i<v1.size()-1;i++){
        ans += (v1[i] + v1[i+1]);
    }
    cout<<ans<<endl;
   }

}
