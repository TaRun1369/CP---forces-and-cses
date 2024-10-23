    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;

    long long main() {
        long long t;
        cin>>t;
        while(t--){
           long long n,m;
           cin>>n>>m;
           vector<pair<long long,string>> v;
           for(long long i = 0;i<n;i++){
            long long x;
            cin>>x;
            string s = to_string(x);
            long long nz = 0;
            for(long long j = s.length()-1;j>= 0;j--){
                if(s[j] == '0'){
                    nz++;
                }
                else break;
            }
            v.push_back({nz,s});
           }

            sort(v.rbegin(),v.rend());
            for(long long i = 0;i<n;i+=2){
                if(v[i].first == 0){
                    // cout<<"yaha - "<<endl;
                    break;
                }
                else{
                    string t = v[i].second;
                    long long fz = t.find('0');
                    string tem = t.substr(0,fz);
                    reverse(tem.begin(),tem.end());
                    v[i] = {0,tem};
                    // cout<<"ye dala - "<<tem<<endl;
                }
            }

            string ans = "";
            for(auto it : v){
                ans += it.second;
            }

            if(ans.size() > m) cout<<"Sasha"<<endl;
            else cout<<"Anna"<<endl;
            //cout<<ans<<endl;

        }
        return 0;
    }
