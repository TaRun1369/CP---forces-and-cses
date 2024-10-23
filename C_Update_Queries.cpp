#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long tc;
    cin>>tc;
    while(tc--){
        long long n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        // vector<long long> q(m);
        set<long long> ss;
        for(long long i = 0;i<m;i++){
            long long a;
            cin>>a;
            ss.insert(a);
        }

        string c;
        cin>>c;
        sort(c.begin(),c.end());
        long long i = 0;
        for(auto it :ss){
            s[it - 1] = c[i];
            i++;
        }
        cout<<s<<endl;

    }
}