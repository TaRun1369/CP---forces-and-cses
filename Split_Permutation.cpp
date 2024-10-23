
#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long n,m;
    cin>>n>>m;

    vector<long long> a(m),p(m);
    for(long long i=0;i<m;i++){
        cin>>a[i];
    }
    for(long long i=0;i<m;i++){
        cin>>p[i];
    }

    map<long long,set<long long>>mp;

    for(long long i = 0;i<m;i++){
        mp[p[i]].insert(a[i]);
        mp[a[i]].insert(p[i]);
    }

    long long i = 1, j = 1;
    long long ans = 0;
    while(i <= n){

        while(j <= i && mp[j].find(i) != mp[j].end() ){
            j++;
        }

        ans += (i - j + 1);
        i++;
    }

    cout<<ans<<endl;
   
}
