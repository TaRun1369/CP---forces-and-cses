    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    bool cmp(pair<long long,long long> a,pair<long long,long long> b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return b.first > a.first;
    }
    long long main() {
        long long t;
        cin>>t;
        while(t--){
            long long a,b,c;
            cin>>a>>b>>c;
            if(c > b && b > a){
                cout<<"STAIR"<<endl;
            }
            else if(b > a && b > c) cout<<"PEAK"<<endl;
            else cout<<"NONE"<<endl;
        }
        return 0;
    }
