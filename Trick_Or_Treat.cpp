
#include<bits/stdc++.h>
using namespace std;


long long main(){
    long long tc;
    cin>>tc;
    while(tc--){
        long long n,m;
        cin>>n>>m;

        unordered_map<long long,long long> mp1,mp2;

        for(long long i = 0;i<n;i++){
            long long a;
            cin>>a;
            if(a%m == 0){
                mp1[0]++;
            }
            else{
                mp1[m - a%m]++;
            }
        }

        for(long long i = 0;i<n;i++){
            long long b;
            cin>>b;
            if(b % m == 0){
                mp2[0]++;
            }
            else{
                mp2[b%m]++;
            }
        }


        long long ans = 0;

        for(auto it : mp1){
            if(mp2.find(it.first) != mp2.end()){
                ans += it.second*mp2[it.first];
            }
        }
        cout<<ans<<endl;
    }
    }
