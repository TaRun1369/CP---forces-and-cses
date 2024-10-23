#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long main() {
    

   long long n;
   cin>>n;
   while(n--){
    long long t;
    cin>>t;
    vector<long long> v(t);
    for(long long i = 0;i<t;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    long long mx1 = v[t-1],mx2 = v[t-2];
    long long mn1 = v[0],mn2 = v[1];

    cout<<abs(mx1 - mn1) + abs(mn1 - mx2) + abs(mx2 - mn2) + abs(mx1 - mn2)<<endl;
   }

}
