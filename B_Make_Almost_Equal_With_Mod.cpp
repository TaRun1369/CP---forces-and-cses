    #include <bits/stdc++.h>
    #include <string>
    #include <algorithm>
    using namespace std;
 
    
    long long main() {
        long long tc;
        cin>>tc;
        while(tc--){
            long long n;
            cin>>n;
            vector<long long> v(n);
            long long f = 0;
            for(long long i = 0;i<n;i++){
                cin>>v[i];
                if(v[i] %2 == 0) f++;
                // if(v[i] %4 == 0) e++;
            }
            // if(f != n && f != 0)
            // cout<<2<<endl;
            // else if(e != n)cout<<4<<endl;
            // else{
                long long i = 1;
                // long long j = 4;
                while(pow(2,i) <= 1e18){
                                    long long j = pow(2,i);
                                    map<long long,long long>mp;
                    long long e = 0;
                    for(long long k = 0;k<n;k++){
                        mp[v[k] % j]++; 
                    }
                    if(mp.size() == 2 ){ cout<<j<<endl; break;}
                    i++;
                }
            // }
        }
    
    
    }