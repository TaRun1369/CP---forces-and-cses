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
            unsigned long long n,p;
            cin>>n>>p;
            vector<unsigned long long> a(n),b(n);
            for(long long i=0;i<n;i++){
                cin>>a[i];
            }
            for(long long i=0;i<n;i++){
                cin>>b[i];
            }
            vector<pair<unsigned long long,unsigned long long>> v;
            for(long long i=0;i<n;i++){
                v.push_back({b[i],a[i]});
            }
            sort(v.begin(),v.end(),cmp);
            unsigned long long ans=0,c = 0;
            unsigned long long bachelog = n-1;
            ans += p;
            while(bachelog != 0){
                // ans += p;
                // bachelog--;
                if(v[c].first < p){
                    ans += min(bachelog,v[c].second)*v[c].first*1LL;
                    bachelog -= min(bachelog,v[c].second);
                    c++;
                }
                else{
                    break;
                }
            }

            if(bachelog > 0){
                ans += bachelog*1LL*p*1LL;
            }
            cout<<ans<<endl;
        }
        return 0;
    }
