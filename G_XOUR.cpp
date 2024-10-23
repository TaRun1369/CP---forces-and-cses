


#include <bits/stdc++.h>
using namespace std;


long long main() {
    long long tc;
    cin >> tc;
    while (tc--) {
       long long n;
       cin>>n;
       vector<long long> a(n);
       for(long long i = 0;i<n;i++){
        cin>>a[i];
       }

       map<long long,priority_queue<long long,vector<long long>,greater<long long>>>mp;
       for(auto it : a){
        mp[it>>2].push(it);
       }

       for(long long i = 0;i<n;i++){
        long long lby2 = a[i]>>2;
        long long Nno = mp[lby2].top();
        mp[lby2].pop();
        a[i] = Nno;
        cout<<a[i]<<" ";
       }
       cout<<endl;

    }
}
